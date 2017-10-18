#include <stdio.h>

int vector[100];

void ordenarBurbuja(int[],int );

int main() {
	int longitud;
	int numero, i;
	
	printf ("ingrese la longitud del vector\n");
	scanf  ("%d", &longitud);
	
	printf ("ingrese los numeros para llena el vector\n");
	
	for (i=0; i<longitud; i++){
		
		scanf ("%d", &numero);
		vector[i]=numero;
	}
	
	ordenarBurbuja(vector, longitud);
	

	return 0;
}


	
void ordenarBurbuja(int vector[],int longitud){
	
	int i,j,auxiliar;
	
	for(i=1;i<longitud;i++)
	{
		for(j=0;j<(longitud-i);j++)
		{
			if(vector[j]>vector[j+1])
			{
				auxiliar=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=auxiliar;
			}
			
		}
	}
	
	
	printf("mostrando vector ordenado \n");
	for(i=0;i<longitud;i++)
	{
		printf("%d "" ",vector[i]);	
		
	}
	
}
	
	




