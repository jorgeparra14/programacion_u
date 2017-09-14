#include <stdio.h>

/*programa que calcula la cantidad en pesos segun la cantidad de dolares que se
 tiene y el valor del dolar. 
creado por Jorge Alberto Parra
09 septiembre 2017*/

int main() {
	
	float Fvalor_dolar, Fcantidad_dolares, FtotalDineroEnDolares;
	
	printf ("ingrese el valor del dolar: \n");
	scanf ("%f",& Fvalor_dolar);
	printf ("ingrese la cantidad de dolares: \n");
	scanf ("%f",& Fcantidad_dolares);
	
	FtotalDineroEnDolares=Fvalor_dolar*Fcantidad_dolares;
	
	printf ("valor del dolar = %f \n",Fvalor_dolar);
	printf ("cantidad de dolares = %f \n",Fcantidad_dolares);
	printf ("Resultado: \n");
	printf ("total de dinero en pesos = %f \n",FtotalDineroEnDolares);
	

	
	return 0;
}
