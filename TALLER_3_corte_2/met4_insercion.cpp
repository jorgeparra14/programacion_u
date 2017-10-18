#include <stdio.h>

void ordenamientoInsercion(int vector[], int longit);

int arreglo[100];

int main() {
	
	int numero, i, longitud;
	
	printf ("ingrese la longitud del vector:\n");
	scanf ("%d",&longitud);
	
	printf ("ingrese los numeros para llenar el vector:\n");
	
	for (i=0; i<longitud; i++){
		scanf ("%d",&numero);
		arreglo[i]=numero;
	}
	
	ordenamientoInsercion(arreglo, longitud);
	
	return 0;
}


void ordenamientoInsercion(int vector[], int longit){
	
	int i, posicion, aux;
	
	for (i=0; i<longit; i++){
		
		posicion= i;
		aux = vector[i];
		
		while ((posicion>0)&&(vector[posicion-1]>aux)){
			
			vector[posicion] = vector[posicion-1];
			posicion--;
		}
		vector[posicion] = aux;
	}
	
	printf ("el vector ordenado es:\n");
	for (i=0; i<longit; i++){
		
		printf ("%d "" ",vector[i]);
		
	}
}

