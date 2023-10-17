#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>


int main (int argc, char *argv[])
{

    int pipefd[2];

    pipe(pipefd[2]); /* Creacion de la tuberia por el padre */

    switch(fork()) {
    case -1:
        perror("Error al crear el primer hijo");
        exit(1);

    case 0: /* Primer hijo ejecuta ls y escribe en tuberia */
        close(pipefd[0]);   /* Descriptor de lectura no usado */
        
        /* Duplicar entrada de descriptor de escritura de tuberia en la */
        /* de stdout y cierre de descriptor                             */

        if (pipefd[1] != STDOUT_FILENO) {
            dup2(pipefd[1], STDOUT_FILENO);
            close(pipefd[1]);
        }

        execlp("ls", "ls", (char *) NULL); /* Escribe en tuberia */
        perror("El primer hijo fallo en exec");
        exit(1);

    default: /* El padre pasa a crear otro hijo */
        break;
    }

    switch(fork()) {
    case -1:
        perror("Error al crear el segundo hijo");

    case 0: /* Segundo hijo ejecuta el filtro wc leyendo de la tuberia */
        close(pipefd[1]);   /* Descriptor de escritura no usado */
        
       /* Duplicar entrada de descriptor de lectura de tuberia en la */
       /* de stdin y cierre de descriptor                            */

        if (pipefd[0] != STDIN_FILENO) {
            dup2(pipefd[0], STDIN_FILENO);
            close(pipefd[0]);
        }

        execlp("wc", "wc", (char *) NULL); /* Lee de tuberia */
        perror("El segundo hijo fallo en exec");
        exit(1);

     default: 
        break;
    }

    /* El padre cierra los descriptores no usados de la tuberia */
    close(pipefd[0]);
    close(pipefd[1]);

    /* Y espera a los procesos hijos */
    for (i=0; i < 2; i++)
        wait(NULL);
   
    exit(EXIT_SUCCESS);
}


