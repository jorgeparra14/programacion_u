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
};

void datosPersona(alumno [], int );

int main() {
	
	int Ilongitud=0;
	alumno estudiante[100];
	datosPersona(estudiante, Ilongitud);
	
	return 0;
}

void datosPersona(alumno estudiante[], int Ilongitud){
	
	int Ii;
	float FpromedioEstudiante[100];
	float Fmayor=0;
	float Fmenor=999999;
	int IposicionMayor=0;
	int IposicionMenor=0;
	
	printf ("ingrese la cantidad de los estudiantes: ");
	scanf ("%d",&Ilongitud);
	
	printf ("\n");
	
	printf ("ingrese los datos de cada estudiante:\n");
	
	printf ("\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		
		printf ("estudiante N° %d\n\n", Ii+1);
		
		printf ("nombre:    ");
		fflush(stdin);
		fgets (estudiante[Ii].Cnombre,30,stdin);
		
		printf ("sexo:      ");
		fflush(stdin);
		fgets (estudiante[Ii].Csexo,20,stdin);
		
		printf ("edad:      ");
		fflush(stdin);
		scanf ("%d",&estudiante[Ii].Iedad);
		
		printf ("\n");
	}
	
	printf ("ingrese las notas de los estudiantes:\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		printf ("\nnotas de alumno(a): %s\n", estudiante[Ii].Cnombre);
		
		printf ("primera nota:  ");
		scanf ("%f",&estudiante[Ii].promed.Fnota1);
		
		
		printf ("segunda nota:  ");
		scanf ("%f",&estudiante[Ii].promed.Fnota2);
		
		printf ("tercera nota:  ");
		scanf ("%f",&estudiante[Ii].promed.Fnota3);
		
		FpromedioEstudiante[Ii]=(estudiante[Ii].promed.Fnota1+estudiante[Ii].promed.Fnota2+estudiante[Ii].promed.Fnota3)/3;	
		
	}
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		
		if (FpromedioEstudiante[Ii]>Fmayor){
			Fmayor=FpromedioEstudiante[Ii];
			IposicionMayor=Ii;
		}
		
		if (FpromedioEstudiante[Ii]<Fmenor){
			Fmenor=FpromedioEstudiante[Ii];
			IposicionMenor=Ii;
		}
	}
	
	printf ("\nESTUDIANTE CON EL MAYOR PROMEDIO:\n\n");
	printf (" nombre-----> %s sexo-------> %s edad-------> %d \n promedio---> %f", estudiante[IposicionMayor].Cnombre,  estudiante[IposicionMayor].Csexo, estudiante[IposicionMayor].Iedad, Fmayor);
	
	printf ("\n");
	
	printf ("\nESTUDIANTE CON EL MENOR PROMEDIO:\n\n");
	printf (" nombre-----> %s sexo-------> %s edad-------> %d \n promedio---> %f", estudiante[IposicionMenor].Cnombre,  estudiante[IposicionMenor].Csexo, estudiante[IposicionMenor].Iedad, Fmenor);
	
}

