#include <stdio.h>

/*programa que recive un numero y muestra su tabla de multiplicar de 1 hasta
el 10, con el ciclo do while.
creado por Jorge Alberto Parra
10 septiembre 2017*/

int main() {
	
	int numero;
	int multiplicador=1;
	int resultado;
	printf ("ingrese uu numero entero del 1 al 10: \n");
	scanf ("%d", &numero);
	
	do {
		resultado=numero*multiplicador;
		
		printf ("\n %d * %d = %d",numero, multiplicador,resultado);
		multiplicador ++;
	}
	while (multiplicador != 11);
	
	return 0;
}

