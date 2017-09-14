#include <stdio.h>

/*programa que lee numeros introducidos hasta que se introduzca un numero en el 
rango de 20 a 30 y el 0, y muestre la suma de los numeros mayores a cero, con ciclo do while
creado por Jorge Alberto Parra
10 septiembre 2017*/


int main() {
	
	int Inumero;
	int Iacumulador=0;
	
	do {
		scanf ("%d",&Inumero);
		
		Iacumulador=Iacumulador+Inumero;
		
	}
	while ((Inumero < 20 || Inumero >30)&&(Inumero!=0));
	
	printf ("\n%d", Iacumulador);
	
	return 0;
}

