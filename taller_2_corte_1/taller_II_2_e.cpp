#include <stdio.h>


/*programa que lee tres numeros, luego lee un cuarto numero y luego determina 
si el ultimo ingresado coincide con los anteriortes, con (IF)
creado por Jorge Alberto Parra
09 septiembre 2017*/

int main(){ 
	
	float FprimerNumero, FsegundoNumero, FtercerNumero, FcuartoNumero;
	
	printf ("ingrese tres numeros: \n");
	scanf  ("%f", & FprimerNumero);
	scanf  ("%f", & FsegundoNumero);
	scanf  ("%f", & FtercerNumero);
	
	printf ("ingrese numero a buscar: \n");
	scanf   ("%f", & FcuartoNumero);
	
	if (FcuartoNumero==FprimerNumero || FcuartoNumero==FsegundoNumero  || FcuartoNumero== FtercerNumero )
	{
		printf ("el numero coincide con uno de la lista anterior ");	
	}
	else
	{
		printf ("el numero no coincide con ninguno de la lista anterior ");
	}

	return 0;
}


