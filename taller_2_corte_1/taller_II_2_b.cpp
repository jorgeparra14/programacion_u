#include <stdio.h>

/*programa que lee tres numeros y determina cual de ellos es el mayor con (IF)
creado por Jorge Alberto Parra
09 septiembre 2017*/

int main() {
	
	float 	FprimerNumero, FsegundoNumero, FtercerNumero;
	
	printf ("ingrese tres numeros:  \n");
	scanf ("%f",& FprimerNumero);
	scanf ("%f",& FsegundoNumero);
	scanf ("%f",& FtercerNumero);
	
	if (FprimerNumero > FsegundoNumero && FprimerNumero > FtercerNumero)
	{
		printf ("el numero mayor es :%f",FprimerNumero);
	}
	else 
	{
		if (FsegundoNumero > FprimerNumero && FsegundoNumero > FtercerNumero)
		{
			printf ("el numero mayor es :%f",FsegundoNumero);
		}
		
		else
		{
			if ( FtercerNumero > FprimerNumero  &&  FtercerNumero > FsegundoNumero )
			{
				printf ("el numero mayor es :%f",FtercerNumero); 
				
			}
		}
	}
		
	return 0;
}


