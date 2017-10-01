#include <stdio.h>

/* función que toma como parámetros un vector de números enteros y devuelva la suma de sus elementos
creado por Jorge Alberto Parra.
27 septiembre 2017*/

int sumaVector(int[]);

    int Ivector [10];

int main() {
	
	int  i;
	
	for (i=0; i<10; i++){
		
		printf ("ingrese un numero:\t");
		scanf ("%d",&Ivector[i]);
	}
	
	sumaVector(Ivector);	
	
	return 0;
}

int sumaVector(int arreglos[10]){
	int suma=0, i;
	for (i=0; i<10; i++){
		suma=suma+arreglos[i];
	}
	printf("\nla suma de los elementos del vector es: \t%d",suma);
	
return 0;
}





