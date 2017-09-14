#include <stdio.h>

/*programa que lee seis temperaturas y calcula la temperatura alta, media y baja
. ciclo for.
creado por Jorge Alberto Parra
10 septiembre 2017*/


int main() {
	
	int Ii;
	int Itemperatura;
	int Isuma=0;
	int Ialta=0;
	int Ibaja=50;
	int Imedia=0;
	
	for (Ii=1; Ii<=6; Ii++){
		
		printf ("%dtemperatura en grados=\t",Ii);
		scanf ("%d", &Itemperatura);
		
		if (Itemperatura<Ibaja){
			Ibaja=Itemperatura;
		}
		if (Itemperatura>Ialta){
			Ialta=Itemperatura;
		}
		Isuma=Isuma+Itemperatura;
		
	}
	Imedia=Isuma/(Ii-1);
	
	printf ("\nla nota mas alta es=%d ",Ialta );
	printf ("\nla nota mas media es=%d ",Imedia );
	printf ("\nla nota mas baja es=%d ",Ibaja );
	
	return 0;
}

