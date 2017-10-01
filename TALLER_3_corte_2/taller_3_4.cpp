#include <stdio.h>

/*función que devuelve la parte fraccionaria de cualquier número introducido por
 el usuario. Por ejemplo, si se introduce el número 256.879, 
debería desplegarse el número 0.879 
creado por Jorge Alberto Parra.
26 septiembre 2017*/

float parte_fraccionaria(float);

int main() {

	float Fnumero;
	
	printf ("ingrese un numero para mostrar su parte decimal:\n");
	scanf ("%f",&Fnumero);
	
	printf ("%0.3f",parte_fraccionaria(Fnumero));
	
	
	return 0;
}

float parte_fraccionaria(float a){
	
	float parteFraccionaria;
	int b;
	
	b=a;
	parteFraccionaria=a-b;
	
	return parteFraccionaria; 
}

