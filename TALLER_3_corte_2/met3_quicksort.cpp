#include <stdio.h>

int arreglo[100];

void quicksort(int lista[],int n);

int main() {
	
	int numero, i, longitud;
	
	printf ("ingrese la longitud del vector:\n");
	scanf ("%d",&longitud);
	
	printf ("ingrese los numeros para llenar el vector:\n");
	
	for (i=0; i<longitud; i++){
		scanf ("%d",&numero);
		arreglo[i]=numero;
	}
	
	quicksort(arreglo, longitud);
	
	return 0;
}

void qs(int vec[],int limite_izq,int limite_der){
	
	int izq,der,temporal,medio;
	
	izq=limite_izq;
	
	der = limite_der;
	
	medio = vec[(izq+der)/2];
	
	do{
		
		while(vec[izq]<medio && izq<limite_der)izq++;
		
		while(medio<vec[der] && der > limite_izq)der--;
		
		if(izq <=der)
			
		{
			temporal= vec[izq];
			
			vec[izq]=vec[der];
			
			vec[der]=temporal;
			
			izq++;
			
			der--;
		}
		
	}while(izq<=der);
	
	if(limite_izq<der){
		qs(vec,limite_izq,der);
	}
	
	if(limite_der>izq){
	    qs(vec,izq,limite_der);
	}
}


void quicksort(int vec[],int longi){
	
	int i;
	
	qs(vec,0,longi-1);
	
	printf ("el vector ordenado es:\n");
	for (i=0; i<longi; i++){
		
		printf ("%d "" ",vec[i]);
		
	}
}

