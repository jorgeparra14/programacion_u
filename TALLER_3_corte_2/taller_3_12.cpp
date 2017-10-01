#include <stdio.h>

/* función que toma como parámetros un vector de números y su tamaño y cambie el signo de los elementos del vector
creado por Jorge Alberto Parra.
30 septiembre 2017*/

void cambiaSigno(int [], int);

int Iarreglo [100];

int main() {
	
	int Itamanio,i; 
	
	printf ("ingrese la longitud del arreglo:\n");
	scanf ("%d", &Itamanio);
	
	printf ("ingrese los elementos del vector:\n");
	
	for (i=0; i<Itamanio; i++){
		
		scanf ("%d",&Iarreglo[i]);
		
	}
	
	cambiaSigno(Iarreglo, Itamanio );
	
	return 0;
}

void cambiaSigno(int Ivector[], int Ilongitud){
	
	int i;
	
	for (i=0; i<Ilongitud; i++){
		
		Ivector[i]=Ivector[i]*-1;
	}
	printf ("el vector con signo cambiado es:\n");
	for (i=0; i<Ilongitud; i++){
		
		printf ("%d\n",Ivector[i]);
	}
	
}



