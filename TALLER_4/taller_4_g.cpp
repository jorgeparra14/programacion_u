#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>


struct cancion{
	
	char artista[40];
	char titulo [50];
	int duracion;
	int tamanioKb;
	
};

void menu();
void ingresaDatos(cancion[],int & );
void mostrarDatos(cancion[],int );
void muestraTitulos(cancion[],int);
void buscarCancion (cancion[], int);

int main() {
	
	menu();
	
	return 0;
}

void ingresaDatos(cancion tema[], int &longitud){
	
	int i;
	longitud=0;
	printf ("\ningrese la cantidad de canciones:  ");
	scanf ("%d", &longitud);
	
	printf ("\ningrese los datos de la cancion:\n");
	
	for (i=0; i<longitud; i++){
		
		printf ("\ncancion N° %d:\n",i+1);
		printf ("\nartista: ");
		fflush(stdin);
		fgets(tema[i].artista,40,stdin);
		
		printf ("\ntitulo: ");
		fflush(stdin);
		fgets(tema[i].titulo,50,stdin);
		
		printf ("\nduracion en segundos: ");
		scanf ("%d", &tema[i].duracion);
		
		printf ("\ntamaño en kiloBytes: ");
		scanf ("%d", &tema[i].tamanioKb);	
	}

}


void mostrarDatos(cancion tema[], int longitud){
	
	int i=0;
	
	for (i=0; i<longitud; i++){
		printf ("\n\nla cancion N° %d es:\n", i+1);
		printf ("\n\n artista: %s titulo: %s duracion: %d segundos \n tamaño: %d KB \n formato mp3",tema[i].artista,tema[i].titulo,tema[i].duracion, tema[i].tamanioKb );		
		
	}
	
	
}
	
	


void muestraTitulos(cancion tema[],int longitud){
	
	int i;
	printf ("\nlistado de titulos:\n");
	for (i=0; i<longitud; i++){
		
		printf ("titulo N° %d: %s",i+1 ,tema[i].titulo );
	}
}

void buscarCancion (cancion tema[], int longitud){
	int i;
	char comparacion[40];
	char nombre[40];
	
	
	printf ("ingrese titulo o nombre del artista a buscar: ");
	fflush(stdin);
	fgets(nombre,40,stdin);
	
	for (i=0; i<longitud; i++){
		
		comparacion=tema[i].artista;
		
		if (strcmp(nombre,comparacion)= 0){
			
			printf ("\n\nartista: %s titulo: %s duracion: %d segundos \n tamaño: %d KB \n formato mp3",tema[i].artista,tema[i].titulo,tema[i].duracion, tema[i].tamanioKb );	
			
		}
		
		comparacion=tema[i].titulo;
		
		if (strcmp(nombre,comparacion)==0){
			
			printf ("\n\nartista: %s titulo: %s duracion: %d segundos \n tamaño: %d KB \n formato mp3",tema[i].artista,tema[i].titulo,tema[i].duracion, tema[i].tamanioKb );	
			
		}
		
	}
}


void menu(){
	cancion tema[100];
	int opcion;
	cancion vector[100];
	int longitud;
	
	opcion=0;
	
	while (opcion!=5){
		
		printf ("\n\n        MENU        \n");
		printf ("\nelija un numero segun la opcion requerida\n");
		printf ("\n1. ingresar cancion\n");
		printf ("2. mostrar cancion.\n");
		printf ("3. mostrar titulo de todas las canciones\n");
		printf ("4. buscar cancion\n");
		printf ("0. salir\n\n");
		printf ("ingrese la opcion:  ");
		scanf ("%d", &opcion);
		
	    
		switch (opcion){
		
		
		case 1:  
			ingresaDatos (tema,longitud=0);
		break;
		case 2: 
			mostrarDatos (tema, longitud);	
		break;
		case 3:  
			muestraTitulos (tema, longitud);
		break;
		case 4: 
			buscarCancion (vector, longitud);  
		break;
		case 0:
			exit(0);
			break;
		default: 
			printf ("opcion no valida."); 
		break;
		}    
	}
}



