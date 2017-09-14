#include <stdio.h>

/*programa que calcula el salario de un empleado tomando en cuenta la cantidad de horas diurnas, nocturnas, dominicales y festivas ingresadas por el usuario.
creado por Jorge Alberto Parra.
09 septiembre 2017*/

int main() {
	
	int Ihoras_diurnas, Ihoras_nocturnas, Ihoras_dominicales, Ihoras_festivos;
	float FvalorHoraDiurna,FvalorHoraNocturna, FvalorHoraDominical,FvalorHorafestivo,FtotalSalario;
	float FvalorTotalDiurnas, FvalorTotalNocturnas,FvalorTotalDominicales, FvalorTotalFestivos;  
	
	FvalorHoraDiurna=2500;
	FvalorHoraNocturna=(FvalorHoraDiurna*0.35)+FvalorHoraDiurna;
	FvalorHoraDominical=(FvalorHoraDiurna*0.50)+FvalorHoraDiurna;;
	FvalorHorafestivo=(FvalorHoraDiurna*0.75)+FvalorHoraDiurna;;
	
	printf ("ingrese la cantidad de horas diurnas laboradas: \n");
	scanf ("%d", & Ihoras_diurnas);
	
	printf ("ingrese la cantidad de horas nocturnas laboradas: \n");
	scanf ("%d", & Ihoras_nocturnas );
	
	printf ("ingrese la cantidad de horas dominicales laboradas: \n");
	scanf ("%d", & Ihoras_dominicales );
	
	printf ("ingrese la cantidad de horas festivas laboradas: \n");
	scanf ("%d", & Ihoras_festivos );
	
	FvalorTotalDiurnas = Ihoras_diurnas*FvalorHoraDiurna;
	FvalorTotalNocturnas = Ihoras_nocturnas* FvalorHoraNocturna;
	FvalorTotalDominicales = Ihoras_dominicales*FvalorHoraDominical;	
	FvalorTotalFestivos = Ihoras_festivos*FvalorHorafestivo;
	FtotalSalario = FvalorTotalDiurnas+FvalorTotalNocturnas+FvalorTotalDominicales+FvalorTotalFestivos;
	
	printf ("valor horas diurnas     = %f \n", FvalorTotalDiurnas);
	printf ("valor horas nocturnas   = %f \n", FvalorTotalNocturnas);
	printf ("valor horas dominicales = %f \n", FvalorTotalDominicales);
	printf ("valor horas festivos    = %f \n", FvalorTotalFestivos );
	printf ("Total salario           = %f \n", FtotalSalario );
	
	return 0;
}

