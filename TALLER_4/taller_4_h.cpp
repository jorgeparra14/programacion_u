#include <stdio.h>
#include <stdlib.h>

struct proveedores{
	
	char nombre[30];
	int cantidadVendida;
	float precioUnitario;
	float importe;
	
};

void menu ();
void registrarProveedores (proveedores vector[],int &longitud);
void imprimirProveedores(proveedores vector[], int longitud);

int main() {

	menu ();
	
	return 0;
}

void registrarProveedores (proveedores vector[],int &longitud){
	
	int i;
	
	
	printf ("ingrese la cantidad de vendedores: ");
	scanf("%d",&longitud);
	
	for (i=0; i<longitud; i++){
		printf ("ingrese el nombre del vendedor: ");
		fflush(stdin);
		fgets (vector[i].nombre,30,stdin);
		
		printf ("ingrese la cantidad vendida: ");
		scanf ("%d",&vector[i].cantidadVendida);
		
		printf ("ingrese el precio unitario: ");
		scanf ("%f",&vector[i].precioUnitario);
		
		vector[i].importe=vector[i].cantidadVendida*vector[i].precioUnitario;
		
		longitud+=1;
	}	
}

void imprimirProveedores(proveedores vector[], int longitud){
	
	int i;
	int mayor=0;
	int menor=999999;
	
	for (i=0; i<longitud; i++){
		printf ("el vendedor es: \n");
		printf ("vendedor: %s \t cantidad: %d \t precio: %f \t importe: %f \n", vector[i].nombre, vector[i].cantidadVendida, vector[i].precioUnitario, vector[i].importe);
		
		if (vector[mayor].importe<vector[i].importe){
			
			mayor=i;
		}
		printf ("proveedor menor: %s \n", vector[menor].nombre);
		printf ("proveedor mayor: %s \n", vector[mayor].nombre);
		
	}

}

void menu (){
	int longitud=0;
	int opcion;
	proveedores vector[100];
	opcion=0;
	while (opcion!=3){
		
		printf ("\n    MENU    \n");
		printf ("1. ingresar proveedores \n");
		printf ("2. mostrar proveedores \n");
		printf ("0. salir \n");
		printf ("ingrese opcion:  ");
		scanf ("%d", &opcion);
		switch (opcion){
			
		case 1: 
			registrarProveedores (vector, longitud);
			break;
		case 2: 
			imprimirProveedores(vector, longitud);
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


	
