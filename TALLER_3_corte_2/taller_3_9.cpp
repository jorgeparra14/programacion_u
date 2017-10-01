#include <stdio.h>

/* funci�n nombrada calc_a�os() que tiene un par�metro entero que representa el 
n�mero total de d�as desde la fecha 1/1/2000 y par�metros de referencia nombrados 
a�o, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado 
de d�as que se le transmitan. Usando las referencias, la funci�n deber� alterar en 
forma directa los argumentos respectivos en la funci�n que llama. Para este problema 
suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as
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
	
	printf ("el fecha actual es= a�o %d mes %d dia %d",anio, mes, dia);

}



