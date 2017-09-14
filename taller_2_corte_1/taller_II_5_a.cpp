#include <stdio.h>
#include <math.h>

/*programa que calcula y muestra en la salida estándar la suma de los cuadrados
 de los 10 primeros enteros mayores que cero. ciclo for.
creado por Jorge Alberto Parra
10 septiembre 2017*/

int main() {
	
	int Ii;
	int Ipotencia;
	int Iacumulador=2;
	
	for (Ii=0; Ii<=10; Ii++){
		
		Ipotencia=pow (Ii,2);
		Iacumulador=Iacumulador+Ipotencia;
	}
	
	printf ("%d",Iacumulador );
	
	return 0;
}

