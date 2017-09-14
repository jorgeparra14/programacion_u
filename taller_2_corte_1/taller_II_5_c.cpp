#include <stdio.h>

/*programa que lee numeros de 1 hasta n y retorna la suma entre ellos . ciclo for.
	creado por Jorge Alberto Parra
	10 septiembre 2017*/

int main() {
	
	int In;
	int Ii;
	int Iacumulador=0;
	
	scanf ("%d", &In);
	
	for (Ii=0; Ii<=In; Ii++){
		
	   Iacumulador=Iacumulador+Ii;
	   
	}
	
	printf ("\n%d",Iacumulador);
	
	return 0;
}

