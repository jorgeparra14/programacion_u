#include <stdio.h>

/* función que toma como parámetro un vector de enteros y su tamaño e imprima 
un vector con los elementos impares del vector recibido
creado por Jorge Alberto Parra.
30 septiembre 2017*/

void cambiaSigno(int [],int [], int);

int Iarreglo [100];
int reciveImpares[100];

int main() {
	
	int Itamanio,i; 
	
	printf ("ingrese la longitud del arreglo:\n");
	scanf ("%d", &Itamanio);
	
	printf ("ingrese los elementos del vector:\n");
	
	for (i=0; i<Itamanio; i++){
		scanf ("%d",&Iarreglo[i]);
	}
	
	cambiaSigno(Iarreglo,reciveImpares, Itamanio );
	
	return 0;
}

void cambiaSigno(int Ivector[],int pares[], int Ilongitud){
	
	int i;
	
	for (i=0; i<Ilongitud; i++){
		
		if (Ivector[i]%2 != 0 ){
			
			pares[i]=Ivector[i];
		}
	}
	printf ("los numeros impares del vector son:\n");
	for (i=0; i<Ilongitud; i++){
		
		if (Ivector[i]%2 != 0 ){
			
	       printf ("%d\n", pares[i]);
		}
	}
	
}
