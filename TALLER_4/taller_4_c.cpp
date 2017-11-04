#include <stdio.h>

struct empleado{
	
	char Cnombre[30];
	int Iedad;
	char Cocupacion[20];
	float Fsalario;
};

void datosPersona(empleado [], int);

int main() {
	int Ilongitud=0;
	empleado trabajador[100];
	datosPersona(trabajador,Ilongitud);
	
	
	return 0;
}

void datosPersona(empleado trabajador[], int Ilongitud){
	
	int i;
	
	printf ("ingrese la cantidad de los trabajadores de la empresa: ");
	scanf ("%d",&Ilongitud);
	
	printf ("\n");
	
	printf ("ingrese los datos de cada trabajador:\n");
	
	printf ("\n");
	
	for (i=0; i<Ilongitud; i++){
		
		printf ("trabajador N° %d\n\n", i+1);
		
		printf ("nombre:    ");
		fflush(stdin);
		fgets (trabajador[i].Cnombre,30,stdin);
		
		printf ("edad:      ");
		fflush(stdin);
		scanf ("%d",&trabajador[i].Iedad);
		
		printf ("ocupacion: ");
		fflush(stdin);
		fgets (trabajador[i].Cocupacion,20,stdin);
		
		printf ("salario:   ");
		fflush(stdin);
		scanf ("%f",&trabajador[i].Fsalario);
		
		printf ("\n");
	}
	
	float mayor=0;
	float menor=999999;
	
	int posicionMayor=0;
	int posicionMenor=0;
	
	for (i=0; i<Ilongitud; i++){
		
	  if (trabajador[i].Fsalario>mayor){
	  mayor=trabajador[i].Fsalario;
		posicionMayor=i;
	  }
	  
	  if (trabajador[i].Fsalario<menor){
		  menor=trabajador[i].Fsalario;
		  posicionMenor=i;
	  }
	}
	
	printf ("TRABAJADOR CON EL MAYOR SALARIO:\n");
	printf (" nombre-----> %s edad-------> %d \n ocupacion--> %s salario----> %f", trabajador[posicionMayor].Cnombre, trabajador[posicionMayor].Iedad, trabajador[posicionMayor].Cocupacion, trabajador[posicionMayor].Fsalario);
	
	printf ("\n");
	
	printf ("\nTRABAJADOR CON EL MENOR SALARIO:\n");
	printf (" nombre-----> %s edad-------> %d \n ocupacion--> %s salario----> %f", trabajador[posicionMenor].Cnombre, trabajador[posicionMenor].Iedad, trabajador[posicionMenor].Cocupacion, trabajador[posicionMenor].Fsalario);
}



