#include <stdio.h>

/*programa que muestra la suma de los numeros del 1 al 100 con ciclo while
creado por Jorge Alberto Parra
09 septiembre 2017*/


int main() {
	int Isuma, Inumero;
	Isuma = 0;
	Inumero = 1;
	
	while (Inumero <= 100)
	{
		Isuma = Inumero + Isuma;
		Inumero = Inumero + 1;
	}
	printf ("La suma es %d", Isuma);
	
	return 0;
}


