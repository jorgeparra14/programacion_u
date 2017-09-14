#include <stdio.h>

/*programa que muestra el factorial de un numero(10)con el ciclo while.
creado por Jorge Alberto Parra.
03 septiembre 2017*/

int main() {
	
	int Inumero= 1;
	int Ifactorial=1;
	
	while (Inumero <=10 ){
		
		Ifactorial=Ifactorial*Inumero;
		Inumero ++;
	}
	printf ("%d", Ifactorial);	
	
	return 0;
}

