#include <stdio.h>

/*programa que calcula el area del triangulo con la base y la atura, 
ingresados por del usuario.
creado por Jorge Alberto Parra.
09 septiembre 2017*/


int main() {
	
	float FbaseTriangulo;
	float FalturaTriangulo;
	float FareaTriangulo;
	
	
	printf ( "ingrese la base del triangulo en cm: \n");
	scanf ("%f",& FbaseTriangulo);
	printf ( "ingrese la altura del triangulo: \n");
	scanf ("%f",& FalturaTriangulo);
	
	FareaTriangulo = (FbaseTriangulo *  FalturaTriangulo) / 2;
	
	printf ( "Triangulo con base = %f \t", FbaseTriangulo);	
	printf (" y altura = %f \n", FalturaTriangulo);
	printf ( "Area del triangulo = %f ", FareaTriangulo );
	
	
	return 0;
}


