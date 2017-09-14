#include <stdio.h>

/*programa que imprime serie de numeros fibonacci,con ciclo while.
creado por Jorge Alberto Parra
10 septiembre 2017*/

int main() {
    int Inumero=0;
	int Ib=1;
	int Ifibonacci;


	printf ("%d \n", Ib);
	
	while (Inumero <= 50){
		
	   Ifibonacci=Inumero+Ib;
	   printf("%d \n",Ifibonacci);
	   Inumero=Ib;
	   Ib=Ifibonacci;
		
	}
	
	return 0;
}

