#include <signal.h>
#include <stdio.h>
#include <string.h>

void tratar_alarma(int sennal)
{
   printf("Se activa la alarma\n\n");
}


int main()
{
   struct sigaction act;

    /*establecer manejador para SIGALRM */
   act.sa_handler = tratar_alarma; /* función manejadora */
   act.sa_flags = 0; /* ninguna acción concreta */
   sigaction(SIGALRM, &act, NULL);
 
   /* ignorar SIGINT */
   act.sa_handler = SIG_IGN; /* no hay función manejadora. Se ignora SIGINT*/ 
   sigaction(SIGINT, &act, NULL);

   for (;;)
   {
      alarm(5);
      pause(); /* servicio para detener el proceso hasta que reciba una señal */
   }
   return 0;
}

