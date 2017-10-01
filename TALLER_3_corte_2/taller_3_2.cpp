#include <stdio.h>

/*función llamada al_cuadrado() que calcula el cuadrado del valor 
que se le transmite y despliegua el resultado. La función es capaz de 
elevar al cuadrado números flotantes.
creado por Jorge Alberto Parra.
25 septiembre 2017*/
float al_cuadrado(float);
float Fa;


int main() {
	
	printf ("ingrese el numero a elevar al cuadrado:\n");
	scanf ("%f",&Fa);
	
	printf ("el resultado es: %.2f",al_cuadrado(Fa));
	
	return 0;
}

float al_cuadrado(float a){
	
	
	float resultado;
	
	resultado=a*a;
	
	return resultado;
}

