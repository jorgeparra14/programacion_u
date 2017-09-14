#include <stdio.h>


/*programa que recive un numero y retorna su tabla de multiplicar.
creado por Jorge Alberto Parra
09 septiembre 2017*/

int main() {
	
	int Inumero, Ii ;
	int Iresultado;
	
	printf ("ingrese el  numero del que desea la tabla de multiplicar: \n");
	scanf ("%d", & Inumero);
	
	for (Ii=1; Ii<11; Ii++) {
		Iresultado=Inumero*Ii;
		printf ("\n %d * %d = %d",Inumero, Ii, Iresultado);
		
	}
	
	
	return 0;
}
