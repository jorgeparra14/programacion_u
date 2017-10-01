#include <stdio.h>

/* función que determina si una matriz es simétrica o no
creado por Jorge Alberto Parra.
30 septiembre 2017*/

void compruebaAsimetria (int[100][100], int, int);


int main() {
	int matriz [100][100];
	int   filas,columnas;
	
	
	printf("Ingrese cantidad de las filas:\n");
	scanf("%d",&filas);
	printf("Ingrese cantidad de columnas :\n");
	scanf("%d",&columnas);
	
	printf("Ingrese los elemetos de la matriz:\n");
	
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
		
		  scanf ("%d",&matriz[i][j]);
		  
		}
	}
	
	printf("\n");
	
	for (int i=0; i<columnas; i++){
		for (int j=0; j<filas; j++){
			
			printf("%d\n",matriz[j][i]);
			
		}
		
	}
	
	compruebaAsimetria ( matriz, filas, columnas);
	
	return 0;
}




void compruebaAsimetria (int matr[100][100], int fil, int column){
	
	int bandera=2;
	
	if (fil==column){
		for(int i =0; i<fil; i++){
			
			for(int j=0; j<column; j++){
				
				if(matr[i][j]==matr[j][i]){
					bandera=1;
				}else{
					bandera=2;
				}
				break;
			}
		}	
		
	}
	
	if (bandera==1){
		
		printf("LA MATRIZ ES SIMETRICA");
	}else{
		printf("LA MATRIZ NO  ES SIMETRICA");	
		
	}
	return 0;
}


