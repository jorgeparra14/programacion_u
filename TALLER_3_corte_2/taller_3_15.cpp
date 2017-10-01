#include <stdio.h>

/* función que dada una matriz y un número de fila de la matriz devuelva el 
menor de los elementos almacenados en dicha fila
creado por Jorge Alberto Parra.
30 septiembre 2017*/

void menorDeFila(int [50][50],int);

int main() {
	
	int matriz [50][50], Ifilas, Icolumnas,InumeroFila;
	
	printf ("ingrese el numero de filas\n");
	scanf("%d",&Ifilas);
	printf ("ingrese el numero de columnas\n");
	scanf("%d",&Icolumnas);
	printf ("ingrese la fila de la cual desea saber el numero menor:\n");
	scanf("%d",&InumeroFila);
	
	printf ("ingrese los numeros de la matriz:\n");
	
	for(int i=0;i<Ifilas;i++)
	{
		for(int j=0;j<Icolumnas;j++)
		{
			scanf("%d",&matriz[i][j]);
		}		
	}
	
	menorDeFila(matriz,InumeroFila );
	
	return 0;
}

void menorDeFila(int matr[50][50], int numFila){
	
	int menor=100;
	
	for(int i=numFila-1;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if (matr[i][j]<menor){
				
				menor=matr[i][j];
			}
		}		
	}
	printf ("el menor numero de la fila %d es %d",numFila,menor );
}



