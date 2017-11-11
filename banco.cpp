#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct banco{
	
	char nombreBanco[40];
	char nit[30];
	char gerente[40];
	char direccion[60];
	char correo[60];
	int telefono;
	
};

banco bancoVariable[10];

struct fecha{
	
	int dia;
	int mes;
	int anio;	
};

struct clienteBanco{
	
	int clave;
	char nombre[40];
	int tramite;
	int estado;
	fecha fech;
	
}; 
clienteBanco usuario[100];

void encabezado1(banco bancoVariable);
void insertarClientes(clienteBanco usuario[], int & longitud);
void editarClientes(clienteBanco usuario[], int longitud);
void atenderClientes(clienteBanco usuario[], int longitud);
void listarAtendidos(clienteBanco usuario[], int longitud);
void listarNoAtendidos(clienteBanco usuario[], int longitud);
void clientesConsignaciones(clienteBanco usuario[], int longitud);
void clientesAsesoria(clienteBanco usuario[], int longitud);
void editaBanco (char nombreOriginal[], char nitOriginal[], char gerenteOriginal[]);
void menu();

int longitud=0;

int main() {
	
	
	menu(); 
	return 0;
}

void menu(){
	
	encabezado1(bancoVariable[10]);
	
	int opcion;
	
	while (opcion!=4){
		
		int longitud;
		
		printf ("\n      MENU      \n\n");
		printf ("1. insertar clientes. \n");
		printf ("2. editar clientes. \n");
		printf ("3. atender clientes.\n");
		printf ("4. lista clientes atendidos.\n");
		printf ("5. lista clientes no atendidos.\n");
		printf ("6. lista clientes para consignaciones.\n");
		printf ("7. lista clientes para asesoria comercial.\n ");
		printf ("8. editar datos banco. ");
		//printf ("9. mostrar datos del banco. ");
		printf ("\n0. salir. \n");
		
		printf ("\ningrese su opcion. ");
		scanf ("%d", &opcion);
		
		switch (opcion){
			
		case 1: 
			insertarClientes(usuario, longitud);
		break;
		case 2: 
			editarClientes(usuario, longitud);
		break;
		case 3:  
			atenderClientes(usuario, longitud);
		 break;
		case 4: 
			listarAtendidos (usuario, longitud);
		 break;
		case 5: listarNoAtendidos (usuario, longitud);
		break; 
		case 6: clientesConsignaciones(usuario, longitud);
		break;
		case 7: clientesAsesoria(usuario, longitud);
		break;
		//case 8: editaBanco ();
		break;
		/*case 9: mostrarDatosBanco ();
		break;*/
		case 0: exit(0);
		break;
		default: printf ("dato no admitido.");
		
		}
		
		//pieDePagina();
	}	
}

void encabezado1(banco bancoVariable){
	
	printf ("ingrese el nombre del banco: ");
	fflush(stdin);
	fgets(bancoVariable.nombreBanco,40,stdin);
	fflush(stdin);
	printf ("ingrese el NIT del banco: ");
	fflush(stdin);
	fgets(bancoVariable.nit,30,stdin);
	
	printf ("ingrese nombre de gerente del banco: ");
	fflush(stdin);
	fgets(bancoVariable.gerente,40,stdin);
	
	
	
	printf ("\n_____________________________________________\n");
	printf ("_____________________________________________\n");
	printf ("                                            \n");
	printf ("                                            \n");
	printf ("                  %s                        \n", bancoVariable.nombreBanco );	
	printf ("                                            \n");
	printf ("   NIT:    %s                               \n", bancoVariable.nit);
	printf ("   Gerete: %s                               \n", bancoVariable.gerente);
	printf ("                                            \n");
	printf ("_____________________________________________\n");
	printf ("_____________________________________________\n");	
}


void insertarClientes(clienteBanco usuario[], int & longitud){
	
	int i;
	
	printf ("\ningrese la cantidad de clientes, deve ser menor a 100: ");
	scanf ("%d",&longitud);
	
	if (longitud>100){
		printf ("\ncantidad no valida.\n");	
	}else{
		printf ("\ningrese los datos del cliente: ");
		
		for (i=0; i<longitud; i++){
			
			printf ("\n\n-nombre cliente N° %d: ", i+1);
			fflush(stdin);
			fgets(usuario[i].nombre,40,stdin);
			
			printf ("-clave cliente (4 digitos) N° %d: ", i+1);
			scanf ("%d",&usuario[i].clave);
			
			printf ("-tramite de cliente N° %d (para consignaciones digite 1, para asesoria comercial digite 2: ", i+1);
			scanf ("%d",&usuario[i].tramite);
			
			printf ("-fecha de nacimiento (en numeros cada campo) : \n");
			
			printf ("*dia: ");
			scanf ("%d",&usuario[i].fech.dia);
			
			printf ("*mes: ");
			scanf ("%d",&usuario[i].fech.mes);
			
			printf ("*año: ");
			scanf ("%d",&usuario[i].fech.anio);
			
			printf ("-estado (si atendido digite 1, de lo contrario digite 2): ");
			scanf ("%d",&usuario[i].estado);
			
			
		}	
	}
	
}

void editarClientes(clienteBanco usuario[], int longitud) {
	
	int edit;
	int i;
	char nombreEdit[40];
	int codigoEdit;
	int tramiteEdit;
	int diaEdit;
	int mesEdit;
	int anioEdit;
	int estadoEdit;
	
	printf ("\ningrese numero de cliente a editar: ");
	scanf ("%d",&edit);
	
	printf ("\ningrese nuevo nombre: ");
	fflush(stdin);
	fgets(nombreEdit,40,stdin);
	strcpy(usuario[edit-1].nombre,nombreEdit);

	printf ("ingrese nuevo codigo: ");
	scanf ("%d",&codigoEdit);
	
	usuario[edit-1].clave=codigoEdit;
	
	printf ("ingrese nuevo tramite (para consignaciones digite 1, para asesoria comercial digite 2): ");
	scanf ("%d", &tramiteEdit);
	
	usuario[edit-1].tramite=tramiteEdit;
	
	printf ("ingrese nueva fecha de naciumiento: ");
	
	printf ("\ndia: ");
	scanf ("%d",&diaEdit);
	
	usuario[edit-1].fech.dia=diaEdit;
	
	printf ("mes: ");
	scanf ("%d",&mesEdit);
	
	usuario[edit-1].fech.mes=mesEdit;
	
	printf ("año: ");
	scanf ("%d",&anioEdit);
	
	usuario[edit-1].fech.anio=anioEdit;
	
	printf ("\ningrese nuevo estado: ");
	scanf ("%d",&estadoEdit);
	
	usuario[edit-1].estado=estadoEdit;
	
	printf ("\nla nueva informacion de clientes es: \n");
	
	for (i=0; i<longitud; i++){
		
		printf ("\n\ncliente N° %d: \n",i+1);
		printf ("clave: %d \nnombre: %stramite: %d\nfecha de nacimiento: \ndia: %d \nmes: %d\naño: %d \nestado %d  ",usuario[i].clave, usuario[i].nombre, usuario[i].tramite, usuario[i].fech.dia, usuario[i].fech.mes, usuario[i].fech.anio, usuario[i].estado);
	}
	

}

void atenderClientes(clienteBanco usuario[], int longitud){
	
	printf ("\n\n**ASIGNACION DE TURNOS**");
	
	int turnoCaja1=1;
	int turnoCaja2=1;
	int i;
	
	
	for (i=0; i<longitud; i++){
		
		if (usuario[i].estado==2 && usuario[i].tramite==1){
			
			printf ("\n\ncliente--> %sturno N° -%d- [caja 1]",usuario[i].nombre, turnoCaja1);
			turnoCaja1++;
			
		}else if (usuario[i].estado==2 && usuario[i].tramite==2){
			
			printf ("\n\ncliente--> %sturno N° -%d- [caja 2]",usuario[i].nombre, turnoCaja2);
			turnoCaja2++;
			
		}else{
			
			printf ("\n\nusuario(a) %s --cliente atendido--",usuario[i].nombre );	
		}
	}
}

void listarAtendidos(clienteBanco usuario[], int longitud){
	
	int i;
	
	printf("\nlistado de clientes atendidos: \n\n");
	
	for (i=0; i<longitud; i++){
		
		if (usuario[i].estado==1){
			
			printf("%s clave: %d\n",usuario[i].nombre, usuario[i].clave);
		}
	}
}
void  listarNoAtendidos(clienteBanco usuario[], int longitud){
	
	int i;
	
	printf("\nlistado de clientes NO atendidos: \n\n");
	
	for (i=0; i<longitud; i++){
		
		if (usuario[i].estado==2){
			
			printf("%s clave: %d\n",usuario[i].nombre, usuario[i].clave);
		}
	}
}
	
void clientesConsignaciones(clienteBanco usuario[], int longitud){
	
	int i;
	
	printf("\nlistado de clientes para consignaciones: \n\n");
	
	for (i=0; i<longitud; i++){
		
		if (usuario[i].tramite==1){
			
			printf("%s clave: %d\n",usuario[i].nombre, usuario[i].clave);
		}
	}
}

void clientesAsesoria(clienteBanco usuario[], int longitud){
	
	int i;
	
	printf("\nlistado de clientes para asesoria comercial: \n\n");
	
	for (i=0; i<longitud; i++){
		
		if (usuario[i].tramite==2){
			
			printf("%s clave: %d\n",usuario[i].nombre, usuario[i].clave);
		}
	}
}

