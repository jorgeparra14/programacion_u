#include <stdio.h>


/*programa que determina si un numero ingesado por el usuario es
 positivo o negativo con (IF)
	creado por Jorge Alberto Parra
	09 septiembre 2017*/

int main(){ 
	
	float  Fnumero;
	
	printf ("ingrese un numero: \n");
	scanf ("%f",& Fnumero);
	
	if (Fnumero > 0) 
	{
		printf ("el numero es positivo ");	
	}
	else
	{
		printf ("el numero es negativo ");	
	}

	return 0;
}


