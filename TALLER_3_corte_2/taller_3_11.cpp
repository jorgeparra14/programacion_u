#include <stdio.h>

/* función revisa el vector y dice si el vector esta ordenado de forma creciente
creado por Jorge Alberto Parra.
30 septiembre 2017*/

int IordenVector (int Iarreglo[], int);

int Iarreglo [100];

int main() {
	
	int Itam,i; 
	
	printf ("ingrese la longitud del arreglo:\n");
	scanf ("%d", &Itam);
	
	printf ("ingrese los elementos del vector:\n");
	
	for (i=0; i<Itam; i++){
		
		scanf ("%d",&Iarreglo[i]);
		
	}
	
	IordenVector (Iarreglo,Itam);
	

	return 0;
}

int  IordenVector (int Ivector[], int Itamanio){
	
	int Icontador=0, i ;
	
	int Imayor=0;
	
	for ( i=0; i<Itamanio; i++){
		
		if (Ivector[i]>=Imayor){
			
			Imayor=Ivector[i];
			
			Icontador=Icontador+1;
		}else{
			
			break;
		}
	}
	
	if (Icontador>=Itamanio){
		
		printf ("el vector esta ordenado en orden creciente");
	}else{
		printf ("el vector no esta ordenado en orden creciente");
		
	}
	return 0;
}

