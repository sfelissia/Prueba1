/* Programa: Conversi?n por el m?todo de las divisiones sucesivas por la base*/

#include <conio.h>
#include <stdio.h>
#include "stdlib.h"



int main()
{
	int cociente, resto, num, base, numero;
	char cadena[40];
	
	printf( "\n   Introduzca numero a convertir (entero): " );
	scanf( "%d", &numero );
	printf( "\n   Introduzca base (entero): " );
	scanf( "%d", &base );
	printf( "\n   " );
	printf("Esto es una prueba/n");
	num=numero;
	
	while (cociente >0){
		cociente=num/base;
		resto=num%base;
		printf("%d ",resto);
		num=cociente;
	}    
	printf( "\n\n  " );
	
	
	
	printf( "\n   " );
	
	
	return 0;
}
