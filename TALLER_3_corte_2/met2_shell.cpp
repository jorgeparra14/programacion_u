#include <stdio.h>

int arreglo[100];

void ordenamientoShell(int vector[], int longitud);

int main() {
	
	int numero, i, longitud;
	
	printf ("ingrese la longitud del vector:\n");
	scanf ("%d",&longitud);
	
	printf ("ingrese los numeros para llenar el vector:\n");
	
	for (i=0; i<longitud; i++){
		scanf ("%d",&numero);
		arreglo[i]=numero;
	}
	
	ordenamientoShell(arreglo, longitud);
	
	return 0;
}

void ordenamientoShell(int vector[], int longitud){
	
	int salto,i, j, k, auxiliar;
	salto=longitud/2;
	
	while (salto>0){
		
		for (i=salto;i<longitud; i++){
			
			j=i-salto;
			
			while(j>=0){
				
				k=j+salto;
				
				if(arreglo[j]<=arreglo[k]){
					
					j=-1;
				}else{
					
					auxiliar=arreglo[j];
					arreglo[j]=arreglo[k];
					arreglo[k]=auxiliar;
					j-=salto;
					
				}
			}
		}
		
		salto=salto/2;
	}
	printf ("\n\n");
	printf ("el vector ordenado es:\n");
	for (i=0; i<longitud; i++){
		
		printf ("%d "" ",arreglo[i]);
		
	}
	
	
}

