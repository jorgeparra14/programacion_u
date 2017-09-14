#include <stdio.h>

/*programa que lee numeros y se detiene cuando se ingresa el cero,
 y al final dice cuantos numeros mayores a cero se imprimieron ciclo do while
	creado por Jorge Alberto Parra
	10 septiembre 2017*/

int main() {
	
	int Inumero;
	int Icontador=0;
	
	do {
		scanf("%d", &Inumero);
		if (Inumero !=0){
		Icontador=Icontador+1;
		}
		
	}
	
	while (Inumero!= 0);
	printf("\n");
	printf ("%d ", Icontador);
	
	return 0;
}

