#include <stdio.h>

struct promedio{
	
	float Fnota1;
	float Fnota2;
	float Fnota3;
};

struct alumno{
	
	char Cnombre[30];
	char Csexo[20];
	int Iedad;
	promedio promed;
}estudiante;

void pedirDatos();

int main() {
	
	pedirDatos();
	
	return 0;
}

void pedirDatos(){
	
	float FcalculaPromedio;
	printf ("*ingrese los datos del estudiante:\n\n");
	printf ("ingrese su nombre: ");
	fflush(stdin);
	scanf ("%s",estudiante.Cnombre);
	printf ("ingrese su sexo:   ");
	fflush(stdin);
	scanf ("%s",estudiante.Csexo);
	printf ("ingrese su edad:   ");
	fflush(stdin);
	scanf ("%d", &estudiante.Iedad);
	
	printf ("\n*ingrese las notas del alumno:\n\n");
	printf ("primera nota: ");
	scanf ("%f", &estudiante.promed.Fnota1);
	printf ("segunda nota: ");
	scanf ("%f", &estudiante.promed.Fnota2);
	printf ("tercera nota: ");
	scanf ("%f", &estudiante.promed.Fnota3);
	
	FcalculaPromedio=(estudiante.promed.Fnota1+estudiante.promed.Fnota2+estudiante.promed.Fnota3)/3;
	
	printf ("\n*datos del estudiante:\n\n");
	
	printf (" nombre------>%s \n sexo-------->%s \n edad-------->%d \n promedio---->%f \n ", estudiante.Cnombre, estudiante.Csexo, estudiante.Iedad,FcalculaPromedio);
	
}

