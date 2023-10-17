#include <stdio.h> 
#include "sumar.h"

int main(){
	
	int a = 5, b = 10, c;
	c = sumar(a, b);
	printf("Resultado suma: % d\n", c);
	
	return 0;
}