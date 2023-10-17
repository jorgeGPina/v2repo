#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int imprimir = 1;
char *nomprograma;

int main(int argc, char *argv[])
{
    int i;
    char *ptr;
    nomprograma = argv[0];

    printf("Numero de argumentos = %d\n", argc);
    printf("Nombre del programa: %s\n", nomprograma);

    for (i = 1; i <= argc; i++)
    {
        ptr = malloc(strlen(argv[i])+1);
        strcpy(ptr, argv[i]);

        if (imprimir) 
	   printf("%s\n", ptr);
   
        free(ptr);
    }

     return 0;
} /* fin main */



