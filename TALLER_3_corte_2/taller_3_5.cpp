#include <stdio.h>

/* funci�n llamada maximo() que devuelve el 
valor m�ximo de tres argumentos que se transmiten a la funci�n cuando sea llamada. 
Suponiendo que los tres argumentos ser�n del mismo tipo de datos
creado por Jorge Alberto Parra.
26 septiembre 2017*/

int maximo(int, int, int);

int main() {
	
	int Inum1, Inum2, Inum3;
	
	printf ("ingrese tres numeros:\n");
	scanf ("%d %d %d",&Inum1,&Inum2, &Inum3 );
	
	printf ("el numero mayor es:", maximo(Inum1, Inum2, Inum3));
	
	return 0;
}

int maximo(int a, int b, int c){
	
   int mayor=a;
   
   if (b>mayor){
	   mayor=b;
   }
   if(c>mayor){
	   mayor=c;
   }

return mayor;

}



