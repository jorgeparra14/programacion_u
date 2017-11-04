#include <stdio.h>

struct estudiante{
	char Cnombre[30];
	int Iedad;
	int Igrado;
	float Fpromedio;
};

void pedirDatos(estudiante [],int);

int main() {
	
	int Ilongitud=3;
	estudiante alumno[3];
	pedirDatos(alumno,Ilongitud);
	
	return 0;
}

void pedirDatos(estudiante alumno[], int Ilongitud){
	
	int Ii;
	
	printf ("ingrese los datos de los tres estudiante:\n");
	
	printf ("\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		
		printf ("alumno N° %d\n\n", Ii+1);
		
		printf ("nombre:   ");
		fflush(stdin);
		fgets (alumno[Ii].Cnombre,30,stdin);
		
		printf ("edad:     ");
		fflush(stdin);
		scanf ("%d",&alumno[Ii].Iedad);
		
		printf ("grado:    ");
		fflush(stdin);
		scanf ("%d",&alumno[Ii].Igrado);
		
		printf (" promedio: ");
		fflush(stdin);
		scanf ("%f",&alumno[Ii].Fpromedio);
		
		printf ("\n");
	}
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		if (alumno[Ii].Fpromedio>alumno[Ii+1].Fpromedio && alumno[Ii].Fpromedio>alumno[Ii+2].Fpromedio){
			
			printf ("el alumno con el mayor promedio es:\n");
			
			printf (" nombre------> %s edad--------> %d \n grado-------> %d \n promedio----> %f", alumno[Ii].Cnombre, alumno[Ii].Iedad, alumno[Ii].Igrado, alumno[Ii].Fpromedio);
			break;
		}else{
			
			if (alumno[Ii+1].Fpromedio>alumno[Ii].Fpromedio && alumno[Ii+1].Fpromedio>alumno[Ii+2].Fpromedio){
				
				printf ("el alumno con el mayor promedio es:\n");
				
				printf (" nombre------> %s edad--------> %d \n grado-------> %d \n promedio----> %f", alumno[Ii+1].Cnombre, alumno[Ii+1].Iedad, alumno[Ii+1].Igrado, alumno[Ii+1].Fpromedio);
				break;
				
			}else if(alumno[Ii+2].Fpromedio>alumno[Ii].Fpromedio && alumno[Ii+2].Fpromedio>alumno[Ii+1].Fpromedio){
				
				printf ("el alumno con el mayor promedio es:\n");
				
				printf (" nombre------> %s edad--------> %d \n grado-------> %d \n promedio----> %f", alumno[Ii+2].Cnombre, alumno[Ii+2].Iedad, alumno[Ii+2].Igrado, alumno[Ii+2].Fpromedio);
			
			}
			break;
		}	
		
	}
}
	
	
	
	


