#include <stdio.h>

/* función llamada mayor() que devuelve la fecha más reciente de cualquier par 
de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 
10/9/2005 y 11/3/2015 a mayor(), será devuelta la segunda fecha
creado por Jorge Alberto Parra.
30 septiembre 2017*/

void mayor(int, int, int, int, int, int);

int main() {

int Idia, Imes, Ianio;
int Idia2, Imes2, Ianio2;
	
	printf ("ingrese la primera fecha \n");
	printf ("dia --> ");
	scanf ("%d",&Idia);
	printf ("mes --> ");
	scanf ("%d",&Imes);
	printf ("año --> ");
	scanf ("%d",&Ianio);
	
	printf ("ingrese la segunda fecha\n");
	printf ("dia --> ");
	scanf ("%d",&Idia2);
	printf ("mes --> ");
	scanf ("%d",&Imes2);
	printf ("año --> ");
	scanf ("%d",&Ianio2);
	
	mayor(Idia, Imes, Ianio, Idia2, Imes2, Ianio2 );
	
	return 0;
}

void mayor( int di, int me,int an, int di2, int me2,int an2){
	
	int mesDias,mesDias2;
	
	mesDias=(me*30)+di;
	mesDias2=(me2*30)+di2;
	
	if (an>an2){
		printf ("la fecha mas actual es: %d / %d / %d ",di, me, an);
		
	}else{
		if (an<=an2 && mesDias > mesDias2 ){
			printf ("la fecha mas actual es: %d / %d / %d ",di, me, an);
			
		}else{
			
			if (an2>an){
				printf ("la fecha mas actual es: %d / %d / %d ",di2, me2, an2);	
				
			}else{
				if (an2<=an && mesDias2  > mesDias ){
					printf ("la fecha mas actual es: %d / %d / %d",di2, me2, an2);
				}
			}
		}
	}
}


