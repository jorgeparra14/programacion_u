#include <stdio.h>

int main() {
	
	char cadena[100];
    
	int contador=0;
	int i;
	
	printf ("ingrese una cadena de caracteres: ");
	scanf ("%s", cadena);
	
		for (i=0; i<=100; i++){
			
			if (cadena [i]!= '\0'){
				
				contador=contador+1;
			}else{
				
				break;
			}
		}
		if (contador>10){
			
			printf ("\n%s",cadena);
		}
			
	return 0;
}

