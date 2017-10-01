#include <stdio.h>

/*función nombrada funpot() que eleva un número entero que se le transmita a una 
potencia en número entero positivo y despliegua el resultado. El número entero positivo 
es el segundo valor transmitido a la función.
creado por Jorge Alberto Parra.
26 septiembre 2017*/

int funpot(int, int);

int main() {
	
	int In, Ip;
	
	printf ("ingrese el numero a elevar: \n");
	scanf ("%d", &In);
	printf ("ingrese el numero al cual se va a elevar: \n");
	scanf ("%d", &Ip);
	
	if (Ip>=1){
		
		printf ("la potencia es: %d", funpot(In, Ip));	
	}else{
		
		printf ("el numero al cual se a elevar no es positivo");	
	}
	
	return 0;
}

int funpot(int n, int p){
	
	int i, potencia=1;
	

	for (i=1; i<=p; i++){
	
	 potencia=potencia*n;
	
	}
	
	return potencia;
	
}

