#include <stdio.h>

/* función nombrada cambio() que tenga un parámetro en número 
entero y seis parámetros de referencia en número entero nombrados cien, cincuenta, 
veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el valor 
entero transmitido como una cantidad en dólares y convertir el valor en el número menor de 
billetes equivalentes.
creado por Jorge Alberto Parra.
27 septiembre 2017*/

void cambio(int, int&, int&, int&, int&, int&, int& );

int main() {
	
	int Inumero, Icien=2, Icincuenta=4, Iveinte=5, Idiez=6, Icinco=7, Iuno=8;
	
	printf ("ingrese el valor a cambiar:\n");
	scanf ("%d", &Inumero);
	
	cambio (Inumero, Icien, Icincuenta, Iveinte, Idiez, Icinco, Iuno);
	
	return 0;
}

void cambio(int valor, int &cien,int &cincuenta,int &veinte,int &diez,int &cinco,int &uno){
	cien=valor/100;
	valor=valor%100;
	cincuenta=valor/50;
	valor=valor%50;
	veinte=valor/20;
	valor=valor%20;
	diez=valor/10;
	valor=valor%10;
	cinco=valor/5;
	valor=valor%5;
	uno=valor/1;
	valor=valor%1;
	
	printf ("billetes de 100 = %d\n",cien);
	printf ("billetes de 50  = %d\n", cincuenta);
	printf ("billetes de 20  = %d\n", veinte);
	printf ("billetes de 10  = %d\n",diez);
	printf ("billetes de 5   = %d\n", cinco);
	printf ("billetes de 1   = %d\n", uno);
}


