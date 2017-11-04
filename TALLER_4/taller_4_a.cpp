#include <stdio.h>
#include <string.h>

struct  competidor{
	char Cnombre[40];
	int Iedad;
	char Csexo[10];
	char Cclub[40];
	char Ccategoria[20];	
};

void informacionJugador(competidor [], int);

int main(){
	
	competidor jugador[200];
	int Ilongitud=0;
	informacionJugador(jugador,Ilongitud);
	
	return 0;
}

void informacionJugador( competidor jugador[], int Ilongitud){
	
	int i;
	
	printf ("ingrese la cantidad de los competidores: ");
	scanf ("%d",&Ilongitud);
	
	printf ("\n");
	
	printf ("ingrese los datos de cada competidor:\n");
	
	printf ("\n");
	
	for (i=0; i<Ilongitud; i++){
		
		printf ("competidor N° %d\n\n", i+1);
		
		printf ("nombre: ");
		fflush(stdin);
		fgets (jugador[i].Cnombre,40,stdin);
		
		printf ("edad:   ");
		fflush(stdin);
		scanf ("%d",&jugador[i].Iedad);
		
		
		printf ("sexo:   ");
		fflush(stdin);
		fgets (jugador[i].Csexo,10,stdin);
		
		
		printf ("club:   ");
		fflush(stdin);
		fgets (jugador[i].Cclub,40,stdin);
		
		if (jugador[i].Iedad<=15){
			strcpy(jugador[i].Ccategoria, "INFANTIL");
		}else{
			
			if (jugador[i].Iedad<=30){
				
				strcpy(jugador[i].Ccategoria, "JOVEN");
				
			}else if(jugador[i].Iedad>30){
				
				strcpy(jugador[i].Ccategoria, "MAYOR");	
				
			}	
		}
		
		printf ("\n");
		
	}
	
	printf ("LISTA DE COMPETIDORES:\n\n");
	
	for (i=0; i<Ilongitud; i++){
		
		printf ("competidor N° %d:\n\n", i+1);
		
		printf (" nombre------>%s edad-------->%d \n sexo-------->%s \r club-------->%s \r categoria--->%s \n", jugador[i].Cnombre, jugador[i].Iedad, jugador[i].Csexo, jugador[i].Cclub, jugador[i].Ccategoria);
		
		printf ("\n");
	}
}

	


