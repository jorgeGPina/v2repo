#include <stdio.h> 

int sumar(int, int);

int main(){
   int a = 5, b = 10, c;
   c = sumar(a, b);
   printf("Resultado suma: % d\n", c);	
   return 0;
}

int sumar(int sumando1, int sumando2){	
   return sumando1 + sumando2;
}