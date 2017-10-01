#include <stdio.h>

/* función nombrada calc_años() que tiene un parámetro entero que representa el 
número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados 
año, mes y día. La función es calcular el año, mes y día actual para el número dado 
de días que se le transmitan. Usando las referencias, la función deberá alterar en 
forma directa los argumentos respectivos en la función que llama. Para este problema 
suponga que cada año tiene 365 días y cada mes tiene 30 días
creado por Jorge Alberto Parra.
27 septiembre 2017*/


void calc_anios(int, int &, int &,int &);

int main() {
	
	int IcantidadDias, IdiaHoy=10, ImesHoy=6, IanioHoy=2017;
	
	printf ("ingrese la cantidad de dias para saber fecha: \n");
	scanf ("%d", &IcantidadDias);
	
	calc_anios(IcantidadDias, IanioHoy, ImesHoy,IdiaHoy);
	
	return 0;
}

void calc_anios(int totalDias, int &anio, int &mes,int &dia){
	
	int diaActual=1, mesActual=1, anioActual=2000;  
	
	anio=(totalDias/365)+anioActual;
	totalDias=totalDias%365;
	mes=(totalDias/30)+ mesActual;
	totalDias=totalDias%30;
	dia=(totalDias/1)+diaActual;
	totalDias=totalDias%30;
	
	printf ("el fecha actual es= año %d mes %d dia %d",anio, mes, dia);

}



