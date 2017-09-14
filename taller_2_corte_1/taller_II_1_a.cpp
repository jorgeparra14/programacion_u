#include <stdio.h>
#include <math.h>


/*programa que calcula area, diametro y la longitud de la circunferencia con el valor del radio de la circunferencia, ingresado por el usuario.
creado por Jorge Alberto Parra.
09 septiembre 2017*/


int main(int argc, char *argv[]) {
	float FdiametroDeCircunferencia, FlongitudDeCircunferencia;
	float FareaDeCircunferencia, Fradio ;
	const float Fpi=3.1416;
	
	printf (" ingrese el radio de la circunferencia: \n");
	scanf (" %f",& Fradio);
	
	FareaDeCircunferencia=pow(Fradio, 2)*Fpi;
	FdiametroDeCircunferencia=Fradio*2;
	FlongitudDeCircunferencia = 2 * Fpi * Fradio;
	
	printf (" area de circunferencia = %f \n", Fradio );
	printf (" area de la circunferencia = %f \n", FareaDeCircunferencia);
	printf (" diametro de la circunferencia = %f \n",FdiametroDeCircunferencia );
	printf (" longitud de la circunferencia = %f \n",FlongitudDeCircunferencia );
	
	
	
	return 0;
}

