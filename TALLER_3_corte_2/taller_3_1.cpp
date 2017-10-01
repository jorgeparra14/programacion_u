#include <stdio.h>

/*función llamada mult() que acepta dos números en punto flotante como parámetros, 
multiplica estos dos números y despliegue el resultado.
creado por Jorge Alberto Parra.
25 septiembre 2017*/


float mult(float, float);
float Fa, Fb;

int main() {
	
	printf ("ingrese el primer numero a multiplicar:\n");
	scanf ("%f",&Fa);
	printf ("ingrese el segundo numero a multiplicar:\n");
	scanf ("%f",&Fb);
	
	printf ("el resultado es: %0.1f",mult(Fa,Fb));
	
	return 0;
}     

float mult(float a, float b){
	
	float resultado;
	
	resultado=a*b;
	
	return resultado;
}

