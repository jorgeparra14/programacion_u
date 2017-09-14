#include <stdio.h>

/*programa que muestra la sumatoria de los numeros impares que hay 
del 1 al 50 con el ciclo while.
creado por Jorge Alberto Parra.
09 septiembre 2017*/

int main() {
	int Inumero=1;
	int Isumapares=0;
	
	while (Inumero <= 50){
		
		if (Inumero % 2 !=0) {
			Isumapares=Isumapares+Inumero;
		}
		
		Inumero++;
	}
	printf("%d", Isumapares);
	
	return 0;
}


