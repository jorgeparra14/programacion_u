#include <stdio.h>

struct persona{
	
	char Cnombre[40];
	bool Bdiscapacidad;
	
}Pindividuo[100]; 

void pacientes(persona Pindividuo[], int Ilongitud);

int main() {
	
	int Ilongitud=0;
	persona Pindividuo[100];
	pacientes(Pindividuo,Ilongitud);
	
	return 0;
}

void pacientes(persona Pvector[], int Ilongitud){
	
	int Ii;
	int Ivalor;
	
	printf ("ingrese la cantidad de pacientes a examinar:   ");
	scanf ("%d", &Ilongitud);
	
	printf ("\ningrese el nombre de la persona(s):\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		
		printf ("\nnombre de persona numero %d:  ",Ii+1);
		fflush(stdin);
		fgets (Pvector[Ii].Cnombre,40,stdin);
		
		printf ("\nsi es discapacitado digite 1, de lo contrario digite 0 :  ");
		scanf ("%d",&Ivalor);
		
		Pvector[Ii].Bdiscapacidad=Ivalor;
	}
	
	printf ("\n-persona(s) con discapacidad:\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		
		if (Pvector[Ii].Bdiscapacidad==true){
			
			printf ("\n nombre: %s", Pvector[Ii].Cnombre);
			
		}
	}
	
	printf ("\n-persona(s) sin discapacidad:\n");
	
	for (Ii=0; Ii<Ilongitud; Ii++){
		if (Pvector[Ii].Bdiscapacidad==false){
			
			printf ("\nnombre: %s", Pvector[Ii].Cnombre);
			
		}
	}
	
}

