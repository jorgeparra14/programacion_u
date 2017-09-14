#include <stdio.h>
#include <math.h>

int main() {
	
	/*programa que calcula la suma de las potencias de 2 elevado a la n . ciclo for.
	creado por Jorge Alberto Parra
	10 septiembre 2017*/
	
	int Ipotencia;
	int IsumaPotencia=0;
	int In;
	int Ii;
	
	scanf ("%d", &In);
	
	for (Ii=1; Ii<=In; Ii++){
		
		Ipotencia=pow(2, Ii);
		
		IsumaPotencia=IsumaPotencia+Ipotencia;
	}
	printf ("\n%d",IsumaPotencia );

	return 0;
}

