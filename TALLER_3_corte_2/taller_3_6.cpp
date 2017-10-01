#include <stdio.h>
/* función que Intercambia el valor de 2 variables utilizando paso de parámetros por referencia.
	creado por Jorge Alberto Parra.
	26 septiembre 2017*/
void cambiaNumero(int &, int &);

int main() {
	int Inum1=10, Inum2=20;
	cambiaNumero(Inum1, Inum2);	
	printf ("el numero nuevo es:%d\n",Inum1);
	printf ("el numero nuevo es:%d",Inum2);
	return 0;
}
void cambiaNumero(int &a, int &b){
	a=5;
	b=10;
}	
