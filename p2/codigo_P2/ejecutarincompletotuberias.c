#include "minishell.h"
#include "parser.h"
#include "ejecutar.h"
#include "libmemoria.h"

int **crear_pipes(int nordenes)
{
   int **pipes = NULL;
   int i;
   
   pipes = (int **)malloc(sizeof(int *) * (nordenes - 1));
   for(i = 0; i < (nordenes - 1); i++)
   {
      pipes[i] = (int *)malloc(sizeof(int) * 2);
      /* inserte linea de codigo para crear tuberia pipes[i] */
   }
   return(pipes);
}

pid_t ejecutar_orden (const char *orden, int entrada, int salida, int *pbackgr)
{
   char **args;
   pid_t pid;
   int indice_entrada = -1, indice_salida = -1; /* por defecto no hay < y > */
  
   if ((args=parser_orden(orden,&indice_entrada,&indice_salida,pbackgr))== NULL)
   {

      /* introducir codigo, para cerrar, si es necesario, entrada y salida */

      return(-1);
   }
   
   
                   

   /* codigo ya insertado para FASE 2 y FASE 6 */	
	
	






	
		
	
	
}
 
void ejecutar_linea_ordenes(const char *orden)
{
   char **ordenes;
   int nordenes;
   pid_t *pids = NULL;
   int **pipes;
   int backgr;

   ordenes = parser_pipes(orden, &nordenes);
   
   pipes = crear_pipes(nordenes);

       
   /* para cada orden, invocar adecuadamente a ejecutar_orden */















     
  
    /* tratamiento de background para ordenes simples y compuestas */

    /* liberar estructuras de datos dinamicas utilizadas */
    free_ordenes_pipes(ordenes, pipes, nordenes);
    free(pids);
}   
