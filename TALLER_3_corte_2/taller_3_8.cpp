#include <stdio.h>

/* funci�n nombrada tiempo() que tiene un par�metro en n�mero entero llamado totalSeg 
y tres par�metros de referencia enteros nombrados horas, min y seg. La funci�n es 
convertir el n�mero de segundos transmitido en un n�mero equivalente de horas, minutos 
y segundos
creado por Jorge Alberto Parra.
27 septiembre 2017*/

void tiempo (int, int&, int&, int&);

int main() {
	
	int IcantidadSegundos, IcantidadHora=10, IcantidadMinuto=20, IcantidadSegundo=5;
	
	printf ("ingrese la cantidad de segundos a convertir:\n");
	scanf ("%d",&IcantidadSegundos);
	
	tiempo (IcantidadSegundos, IcantidadHora, IcantidadMinuto, IcantidadSegundo);
	
	return 0;
}

void tiempo (int totalSeg, int &horas, int &min, int &seg){
	
	horas=totalSeg/3600;
	totalSeg=totalSeg%3600;
	min=totalSeg/60;
	totalSeg=totalSeg%60;
	seg=totalSeg/1;
	totalSeg=totalSeg%1;
	
	printf ("el tiempo es= %d horas %d minutos %d segundos",horas, min, seg);
}

