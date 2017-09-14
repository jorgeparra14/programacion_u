#include <stdio.h>

/*programa que calcula el resultado de la siguiente expresion: 1-2+3-4+5-6...n
. ciclo for.

creado por Jorge Alberto Parra
10 septiembre 2017*/


int main() {
	
	int In;
	int Ii;
	int Ipares=0;
	int Iimpares=0;
	int IsumaTotal=0;
	int Inegativos;
	
	scanf ("%d", &In);
	
	for (Ii=1; Ii<=In; Ii++){
		
		if (Ii % 2 == 0){
			Inegativos=Ii*-1;
			Ipares=Ipares+Inegativos;
		}
		else {
			
			Iimpares=Iimpares+Ii;
		}
	} 
	
	IsumaTotal=Ipares+Iimpares;
	
	printf ("la operacion 1-2+3-4+5 hasta %d es igual a:\t%d",In,IsumaTotal);
	
	return 0;
}

