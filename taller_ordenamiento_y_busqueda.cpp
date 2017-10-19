#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*creado por jair y jorge parra
fecha 18 octubre 2017*/

int vector[600000];
void menu();
void  llenarVector(int vector[], int &longitud);
void ordenarBurbuja(int vector[],int longitud);
void quicksort(int lista[],int n);
void mostrarVector(int arreglo[], int &longit);
int busquedaBinaria(int array[], int longitu);
void busquedaSecuencial(int vector[],int dato);

int main() {
	
	menu();
	
	return 0;
}

void menu(){
	
	
	int longitud=0;
	int opcion=0;
	while (opcion!=7){
		
		printf ("\n\t\t MENU \n");
		printf ("\nelija un numero segun la operacion requerida:\n");
		printf ("\n0. salir\n");
		printf ("1. llenar vector\n");
		printf ("2. ordenar datos metodo eficiente\n");
		printf ("3. ordenar datos metodo NO eficiente\n");
		printf ("4. buscar dato metodo eficiente\n");
		printf ("5. buscar dato metodo NO eficiente\n");
		printf ("6. mostrar los elementos del vector\n");
		
		
		scanf ("%d",&opcion);
		
		switch (opcion){
			
		case 0: exit(0);
		
		case 1: llenarVector (vector, longitud);
		break;
		case 2:  quicksort(vector,longitud);
		break;
		case 3:  ordenarBurbuja(vector, longitud);
		break;
		case 4:  busquedaBinaria(vector, longitud);
		break;
		case 5: busquedaSecuencial(vector,longitud);
		break;
		case 6:  mostrarVector(vector,longitud);
		break;
		default: printf ("dato no valido.");
		
	  }
     }
    }
	
	
	
	void llenarVector(int vector[], int &longitud){
		
		int aleatorio,i;
		
		int producto=1;
		srand(time(NULL));
		printf("ingrese tamaño vector de acuerdo a las siguientes cantidades a ordenar:\n100000 datos. "" 200000 datos. "" 300000 datos. "" 500000 datos. \n");
		scanf("%d",&longitud);
		for(i=0;i<longitud;i++){
			aleatorio = (rand()%999999)-999998;
			producto=-producto;
			
			vector[i] = producto*aleatorio;
			
			printf("%d ",vector[i]);
			
		}	
		
	}
	
	void qs(int lista[],int limite_izq,int limite_der)
		
	{
		
		int izq,der,temporal,pivote;
		
		izq=limite_izq;
		
		der = limite_der;
		
		pivote = lista[(izq+der)/2];
		
		do{
			
			while(lista[izq]<pivote && izq<limite_der)izq++;
			
			while(pivote<lista[der] && der > limite_izq)der--;
			
			if(izq <=der)
				
			{
				
				temporal= lista[izq];
				
				lista[izq]=lista[der];
				
				lista[der]=temporal;
				
				izq++;
				
				der--;
				
			}
			
		}while(izq<=der);
		
		if(limite_izq<der){qs(lista,limite_izq,der);}
		
		if(limite_der>izq){qs(lista,izq,limite_der);}
		
		
		
		
	}
	
	
	void quicksort(int lista[],int n)
		
	{
		clock_t start = clock();
		qs(lista,0,n-1);
		printf("Tiempo transcurrido en metodo eficiente: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
			
		
		
	}
	
	
	void ordenarBurbuja(int vector[],int longitud){
		clock_t start = clock();
		
		int i,j,auxiliar;
		
		for(i=1;i<longitud;i++)//el i empezaba en 0, y lo cambie a 1
		{
			for(j=0;j<(longitud-i);j++)//j era hasta longitud, y lo cambie a longitud-i
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
			if (vector[i]!=1){
				printf("%d "" ",vector[i]);	
			}
			
		}
		printf("Tiempo transcurrido en metodo NO eficiente: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	}
	
	
	
	void mostrarVector(int arreglo[], int &longit){
		
		printf("\nlos elementos del vector son;\n");
		
		for (int i=0; i<longit; i++) {
			
			printf ("%d "" ",arreglo[i]);
			
			
		}
		
	}
	
	
	int busquedaBinaria(int array[],int longitu){
		clock_t start = clock();
		
		int inf,sup,mitad,dato;
		char band = 'F';
		
		printf ("ingrese el dato a buscar;\n");
		scanf ("%d",&dato);
		
		inf = 0;
		sup = longitu;
		
		while((inf <= sup) && (band == 'F')) {
			mitad =(inf+sup)/2;
			if(array[mitad]==dato){
				band = 'V';
			}
			else if(array[mitad]>dato){
				sup = mitad - 1;
			}
			else{
				inf = mitad + 1;
			}
		}
		
		if(band == 'F'){
			printf("Elemento no encontrado ");
		} 
		else if(band=='V'){
			printf("Elemento encontrado, en la pos: %i",mitad);
		}
		
		printf("\nTiempo transcurrido en metodo eficiente: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
		//este printf estaba despues del return, y lo coloque antes del return
		//porque no estaba mostrando el tiempo.
		return 0;
		
	}
	
	
	void busquedaSecuencial(int vector[],int longitud)
	{
		clock_t start = clock();
		
		int i,dato;
		char bandera='f';
		i=0;
		printf("ingrese dato a buscar \n");
		scanf("%d",&dato);
		while((bandera=='f')&&(i<longitud-1))
		{
			if(vector[i]==dato)
			{
				bandera='v';
			}
			i++;
		}
		if(bandera=='f')
		{
			printf("el numero buscado no esta en la lista \n");
		}
		else
		{
			printf("El numero ha sido encontrado en la posicion %d",i-1);
		}
		printf("Tiempo transcurrido en metodo NO eficiente: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
	}
	
