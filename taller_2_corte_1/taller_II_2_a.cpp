#include <stdio.h>

/*programa que lee dos numeros y determina cual de ellos es el mayor con (IF)
	creado por Jorge Alberto Parra
	09 septiembre 2017*/

int main(){
	
	float FprimerNumero, FsegundoNumero;
	
	printf ("ingrese dos numeros: \n");
	scanf ("%f",& FprimerNumero);
	scanf ("%f",& FsegundoNumero);
	
	if (FprimerNumero > FsegundoNumero){
		printf ("el numero mayor es : %f \n",FprimerNumero);
	}
	else 
	{
		
		printf ("el numero mayor es : %f \n",FsegundoNumero);
	}
	
	return 0;
}

