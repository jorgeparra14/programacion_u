#include <stdio.h>

/*programa que lee un numero y determina si es par o impar con (IF)
creado por Jorge Alberto Parra
09 septiembre 2017*/

int main(){ 
	
	int Inumero;
	
	printf ("ingrese un numero: \n");
	scanf ("%d",& Inumero);
	
	if (Inumero % 2 == 0)
	{
		printf ("el numero es par \n");
	}
	else
	{
		printf ("el numero no es par \n");	
	}
	
	return 0;
}


