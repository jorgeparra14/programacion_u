#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct clientes{
	int id;
	char nombre[30];
	char cedula[20];
	char telefono[30];
	char direccion[30];
	char fecha[30];	
};
struct productos{
	int id;
	char nombre[30];
	float precio;
	
}producticos[100];

struct proveedores{
	int id;
	char nombre[30];
	char  nit[15];
	char telefono[30];
	char direccion[30];
	char fecha[30];
	productos produc;
};


struct peliculas{
	int id;
	char nombre[30];
	char reparto[50];
	char director[30];
	char categoria[30];
	char clasificacion[30];
	char dimension[10];
	char duracion[30];
	int buscar;
}peliculitas[100];

struct fechas{
	char hora[10];
	char dia[10];
	char mes[10];
	char anio[10];
};
struct salas{
	int id;
	fechas horario;
	int capacidad;
	char funcion[20];
	peliculas peli;
}sala[2];

FILE * multicinema_clientes;
FILE * multicinema_proveedores;
FILE * multicinema_productos;
FILE * multicinema_peliculas;
FILE * multicinema_salas;
/*FILE * multicinema_facturas;*/

char ruta1[]="C:\\Users\\ASUS\\Desktop\\proyecto\\multicinema_clientes.txt";
char ruta2[]="C:\\Users\\ASUS\\Desktop\\proyecto\\multicinema_proveedores.txt";
char ruta3[]="C:\\Users\\ASUS\\Desktop\\proyecto\\multicinema_productos.txt";
char ruta4[]="C:\\Users\\ASUS\\Desktop\\proyecto\\multicinema_peliculas.txt";
char ruta5[]="C:\\Users\\ASUS\\Desktop\\proyecto\\multicinema_salas.txt";

int tamanio=0;
int tama=0;
int tam=0;
int tami=0;


clientes cliente[100];
proveedores proveedor[100];
void menu();
void insertarClientes(clientes cliente[],int &tamanio);
void insertarProveedores(proveedores proveedor[],int &tama);
void crearProductos(productos producticos[],int &tam);
void crearPeliculas(peliculas peliculitas[],int &tam);
void crearSalas(salas sala[]);
void listarClientes();
void listarProveedores();
void listarProductos();
void listarPeliculas();
void crearSalas();
void listarSalas();
void buscarPelicula(peliculas peliculitas[],int tam);

int main() {
	/*insertarClientes(cliente, tamanio);
	insertarProveedores(proveedor,tamanio);
	crearProducto(producticos,tam);*/
	/*crearPelicula(peliculitas,tam);*/
	/*crearPelicula(peliculitas,tam);*/
	menu();
	
	return 0;
}

void menu()
{
	int opcion;
	do{
		printf("Menu\n");
		printf("1. Insertar cliente\n");
		printf("2. insertar proveedor\n");
		printf("3. Crear productos \n");
		printf("4. crear peliculas \n");
		printf("5. Crear salas \n");
		printf("6. listar clientes\n");
		printf("7. Listar proveedores \n");
		printf("8. listar productos \n");
		printf("9. Listar peliculas \n");
		printf("10. listar salas \n");
		printf("11. Buscar pelicula \n");
		printf("12. salir. \n");
		printf("Ingrese una opcion: "); scanf("%d", &opcion);
		switch(opcion){
		case 1:
			insertarClientes(cliente,tamanio);
			break;
		case 2:
			insertarProveedores(proveedor,tama);
			break;
		case 3:
			crearProductos(producticos,tam);
			break;
		case 4:
			crearPeliculas(peliculitas,tam); 
			break;
		case 5:
			crearSalas();
			
			break;
		case 6: 
			listarClientes();
			break;
		case 7:
			listarProveedores();
			break;
		case 8:
			listarProductos();
			break;
		case 9:
			listarPeliculas();	
			break;
		case 10:
			listarSalas();
		case 11:
			 buscarPelicula(peliculitas,tam);
			 break;		
		case 12:
			exit(0);
			break;
			
		default: printf("opcion no valida\n");
		}		
	}while(opcion != 13);
}


void insertarClientes(clientes cliente[],int &tamanio)
{
	
	int i,lon;
	char ide[10];
	multicinema_clientes = fopen(ruta1, "at");
	if(multicinema_clientes== NULL){
		
		printf("Error al abrir el archivo \n");
		
	}else{
		
		
		printf("Ingrese la cantidad de clientes a crear \n");
		scanf("%d",&lon);
		
		for(i=tamanio;i<tamanio+lon;i++)
		{
			
			cliente[i].id= 1+i;
			sprintf(ide,"%d",cliente[i].id);
			
			printf("Ingrese nombre del  cliente \n");
			fflush(stdin);
			fgets(cliente[i].nombre,30,stdin);
			
			
			printf("Ingrese cedula cliente \n\n");
			fflush(stdin);
			fgets(cliente[i].cedula,20,stdin);
			
			
			printf("Ingrese telefono cliente \n\n");
			fflush(stdin);
			fgets(cliente[i].telefono,30,stdin);
			
			
			printf("Ingrese direccion del cliente \n");
			fflush(stdin);
			fgets(cliente[i].direccion,30,stdin);
			
			
			printf("Ingrese fecha \n\n");
			fflush(stdin);
			fgets(cliente[i].fecha,30,stdin);
			
			fprintf(multicinema_clientes,"ID: ");
			fwrite(ide,1,strlen(ide),multicinema_clientes);
			fprintf(multicinema_clientes,"\nNombre: ");
			fwrite(cliente[i].nombre,1,strlen(cliente[i].nombre),multicinema_clientes);
			fprintf(multicinema_clientes,"Cedula: ");
			fwrite(cliente[i].cedula,1,strlen(cliente[i].cedula),multicinema_clientes);
			fprintf(multicinema_clientes,"Telefono: ");
			fwrite(cliente[i].telefono,1,strlen(cliente[i].telefono),multicinema_clientes);
			fprintf(multicinema_clientes,"Direccion: ");
			fwrite(cliente[i].direccion,1,strlen(cliente[i].direccion),multicinema_clientes);
			fprintf(multicinema_clientes,"Fecha de creacion: ");
			fwrite(cliente[i].fecha,1,strlen(cliente[i].fecha),multicinema_clientes);
		}
		tamanio=tamanio+lon;	
	}
	fclose(multicinema_clientes);
}

void listarClientes(){
	
	int letra;
	
	multicinema_clientes=fopen(ruta1, "rt");
	if(multicinema_clientes==NULL)
	{
		printf("Error al abrir el archivo \n");
	}else{
		while((letra=fgetc(multicinema_clientes))!=EOF){
			if(letra=='\n'){
				printf("\n");
			}else{
				putchar(letra);
			}
		}
		fclose(multicinema_clientes);
	}
}

void insertarProveedores(proveedores proveedor[],int &tama)
{
	int i,longi;
	char ide2[10];
	
	multicinema_proveedores = fopen(ruta2, "at");
	if(multicinema_proveedores== NULL){
		
		printf("Error al abrir el archivo \n");
		
	}else{
		printf("Ingrese la cantidad de proveedores a crear \n");
		scanf("%d",&longi);
		for(i=tama;i<tama+longi;i++)
		{
			
			proveedor[i].id= 100+i;
			sprintf(ide2,"%d",proveedor[i].id);
			
			fflush(stdin);
			printf("Ingrese nombre del proveedor \n");
			fgets(proveedor[i].nombre,30,stdin);
			
			printf("Ingrese nit proveedor \n\n");
			fgets(proveedor[i].nit,15,stdin);
			
			fflush(stdin);
			printf("Ingrese telefono proveedor \n\n");
			fgets(proveedor[i].telefono,30,stdin);
			
			fflush(stdin);
			printf("Ingrese direccion proveedor \n");
			fgets(proveedor[i].direccion,30,stdin);
			
			fflush(stdin);
			printf("Ingrese fecha \n");
			fgets(proveedor[i].fecha,30,stdin);
			
			fprintf(multicinema_proveedores,"ID: ");
			fwrite(ide2,1,strlen(ide2),multicinema_proveedores);
			fprintf(multicinema_proveedores,"\nNombre: ");
			fwrite(proveedor[i].nombre,1,strlen(proveedor[i].nombre),multicinema_proveedores);
			fprintf(multicinema_proveedores,"Nit: ");
			fwrite(proveedor[i].nit,1,strlen(proveedor[i].nit),multicinema_proveedores);
			fprintf(multicinema_proveedores,"Telefono: ");
			fwrite(proveedor[i].telefono,1,strlen(proveedor[i].telefono),multicinema_proveedores);
			fprintf(multicinema_proveedores,"Direccion: ");
			fwrite(proveedor[i].direccion,1,strlen(proveedor[i].direccion),multicinema_proveedores);
			fprintf(multicinema_proveedores,"Fecha de creacion: ");
			fwrite(proveedor[i].fecha,1,strlen(proveedor[i].fecha),multicinema_proveedores);
		}
		tama=tama+longi;
	}
	fclose(multicinema_proveedores);
}

void listarProveedores()
{
	int letra;
	
	multicinema_proveedores=fopen(ruta2, "rt");
	if(multicinema_proveedores==NULL)
	{
		printf("Error al abrir el archivo \n");
	}else{
		
		while((letra=fgetc(multicinema_proveedores))!=EOF){
			if(letra=='\n'){
				printf("\n");
			}else{
				putchar(letra);
			}
		}
		fclose(multicinema_proveedores);
	}
}





void crearProductos(productos producticos[],int &tam)
{
	int numero;
	int i;
	char ide3[10];
	char precio1[10];
	multicinema_productos = fopen(ruta3, "at");
	
	if(multicinema_productos== NULL){
		
		printf("Error al abrir el archivo \n");
		
	}else{
		
		printf("Ingrese cantidad de productos a crear \n");
		scanf("%d",&numero);
		
		
		for(i=tam;i<tam+numero;i++)
		{
			producticos[i].id=200+i;
			sprintf(ide3,"%d",proveedor[i].id);
			
			fflush(stdin);
			printf("Ingrese articulo \n");
			fgets(producticos[i].nombre,30,stdin);
			
			printf("Ingrese precio \n");
			scanf("%f",&producticos[i].precio);
			sprintf(precio1,"%f",producticos[i].precio);
			
			
			fprintf(multicinema_productos,"ID: ");
			fwrite(ide3,1,strlen(ide3),multicinema_productos);
			fprintf(multicinema_productos,"\nNombre: ");
			fwrite(producticos[i].nombre,1,strlen(producticos[i].nombre),multicinema_productos);
			fprintf(multicinema_productos,"Precio: ");
			fwrite(precio1,1,strlen(precio1),multicinema_productos);
			
		}
		tam=tam+numero;
	}
	fclose(multicinema_productos);
}

void listarProductos()
{
	int letra;
	
	multicinema_productos=fopen(ruta3, "rt");
	if(multicinema_productos==NULL)
	{
		printf("Error al abrir el archivo \n");
	}else{
		
		while((letra=fgetc(multicinema_productos))!=EOF){
			if(letra=='\n'){
				printf("\n");
			}else{
				putchar(letra);
			}
		}
		fclose(multicinema_productos);
	}	
	
	
	
	
}
void crearPeliculas(peliculas peliculitas[],int &tam)
{
	int num,opciones,clasificar,i;
	char ide4[10];
	multicinema_peliculas = fopen(ruta4, "at");
	if(multicinema_peliculas== NULL){
		
		printf("Error al abrir el archivo \n");
		
	}else{
		
		printf("Ingrese cantidad de peliculas a crear \n");
		scanf("%d",&num);
		for(i=tami;i<tami+num;i++)
		{
			peliculitas[i].id=300+i;
			sprintf(ide4,"%d",peliculitas[i].id);
			
			fflush(stdin);
			printf("Ingrese nombre de la pelicula \n");
			fgets(peliculitas[i].nombre,30,stdin);
			
			fflush(stdin);
			printf("Ingrese reparto de la pelicula \n");
			fgets(peliculitas[i].reparto,30,stdin);
			
			fflush(stdin);
			printf("Ingrese nombre del director de la pelicula \n");
			fgets(peliculitas[i].director,30,stdin);
			
			literal_a:
				printf("Ingrese una opcion de categoria de la pelicula \n");
			printf("1.terror, 2.comedia, 3.accion, 4.infantil, 5.eroticas \n");
			
			scanf("%d",&opciones);
			
			if(opciones!=1 && opciones!=2 && opciones !=3 && opciones!=4 && opciones !=5)
			{
				printf("opcion no valida \n");
				goto literal_a;
			}else{
				if(opciones==1)
				{
					
					strcpy(peliculitas[i].categoria,"terror \n");
				}
				else if(opciones==2)
				{
					strcpy(peliculitas[i].categoria,"comedia \n");
				}else if(opciones==3)
				{
					strcpy(peliculitas[i].categoria,"accion\n");
				}else if(opciones==4)
				{
					strcpy(peliculitas[i].categoria,"infantil\n");
				}else if(opciones==5){
					strcpy(peliculitas[i].categoria,"erotica\n");
				}
			}
			
			literal:
			   printf("Ingrese una opcion clasificacion de la pelicula \n");
			printf("1.familiar 2.mayores de 12 años 3.mayores de 18 años \n");
			scanf("%d",&clasificar);
			if(clasificar!=1 && clasificar!=2 && clasificar !=3)
			{
				printf("opcion no valida \n");
				goto literal;
			}else{
				if(clasificar==1)
				{
					strcpy(peliculitas[i].clasificacion,"familiar\n");	
				}else if(clasificar==2)
				{
					strcpy(peliculitas[i].clasificacion,"12 años\n");
				}else if(clasificar==3)
				{
					strcpy(peliculitas[i].clasificacion,"12 años\n");	
				}
				fflush(stdin);
				printf("Ingrese duracion de la pelicula  \n");
				fgets(peliculitas[i].duracion,20,stdin);
			}
			fprintf(multicinema_peliculas,"\nID: ");
			fwrite(ide4,1,strlen(ide4),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nNombre: ");
			fwrite(peliculitas[i].nombre,1,strlen(peliculitas[i].nombre),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nReparto: ");
			fwrite(peliculitas[i].reparto,1,strlen(peliculitas[i].reparto),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nDirector: ");
			fwrite(peliculitas[i].director,1,strlen(peliculitas[i].director),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nCategoria: ");
			fwrite(peliculitas[i].categoria,1,strlen(peliculitas[i].categoria),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nClasificacion: ");
			fwrite(peliculitas[i].clasificacion,1,strlen(peliculitas[i].clasificacion),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nDuracion: ");
			fwrite(peliculitas[i].duracion,1,strlen(peliculitas[i].duracion),multicinema_peliculas);
			
		}
		tami=tami+num;
	}
	fclose(multicinema_peliculas);
}

void listarPeliculas()
{
	int letra;
	
	multicinema_peliculas=fopen(ruta4, "rt");
	if(multicinema_peliculas==NULL)
	{
		printf("Error al abrir el archivo \n");
	}else{
		
		while((letra=fgetc(multicinema_peliculas))!=EOF){
			if(letra=='\n'){
				printf("\n");
			}else{
				putchar(letra);
			}
		}
		fclose(multicinema_peliculas);
	}
}



void crearSalas()
{
	int opcion,i;
	char ide4[10];
	multicinema_salas = fopen(ruta5, "at"); 
	if(multicinema_salas== NULL){
		
		printf("Error al abrir el archivo \n");
		
	}else{
		
		for(i=0;i<2;i++)
		{
			sala[i].id=1+i;
			fflush(stdin);
			printf("Ingrese dia \n");
			fgets(sala[i].horario.dia,10,stdin);
			
			fflush(stdin);
			printf("Ingrese mes \n");
			fgets(sala[i].horario.mes,10,stdin);
			
			
			printf("Ingrese año \n");
			scanf("%s",sala[i].horario.anio);
			
			fflush(stdin);
			printf("Ingrese hora \n");
			fgets(sala[i].horario.hora,10,stdin);
			
			printf("Ingrese capacidad sala \n");
			scanf("%d",&sala[i].capacidad);
			
			
			fflush(stdin);
			printf("Ingrese nombre de la pelicula \n");
			fgets(sala[i].peli.nombre,30,stdin);
			
			litera_1:
				fflush(stdin);
			printf("Ingrese una opcion\n");
			printf("1.Matinal 2.Vespertina 3.Nocturna \n");
			
			scanf("%d",&opcion);
			if(opcion!=1 && opcion!=2 && opcion !=3)
			{
				printf("opcion no valida \n");
				goto litera_1;
			}else{
				if(opcion==1)
				{
					strcpy(sala[i].funcion,"matinal\n");
				}else if(opcion==2)
				{
					strcpy(sala[i].funcion,"vespertina\n");
				}else if(opcion==3)
				{
					strcpy(sala[i].funcion,"nocturna\n");
				}
				
			}
			
			
			/*fprintf(multicinema_peliculas,"ID: ");
			fwrite(ide4,1,strlen(ide4),multicinema_peliculas);*/
			fprintf(multicinema_peliculas,"\nNombre: \n");
			fwrite(sala[i].peli.nombre,1,strlen(sala[i].peli.nombre),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\n\nReparto: \n");
			fwrite(peliculitas[i].reparto,1,strlen(peliculitas[i].reparto),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\n\nDirector: \n");
			fwrite(peliculitas[i].director,1,strlen(peliculitas[i].director),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nCategoria: \n");
			fwrite(peliculitas[i].categoria,1,strlen(peliculitas[i].categoria),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nClasificacion:\n ");
			fwrite(peliculitas[i].clasificacion,1,strlen(peliculitas[i].clasificacion),multicinema_peliculas);
			fprintf(multicinema_peliculas,"\nHora funcion: \n");
			fwrite(sala[i].horario.hora,1,strlen(sala[i].horario.hora),multicinema_peliculas);
			
		}
	}
}

void listarSalas()
{
	int letra;
	
	multicinema_salas=fopen(ruta4, "rt");
	if(multicinema_salas==NULL)
	{
		printf("Error al abrir el archivo \n");
	}else{
		
		while((letra=fgetc(multicinema_salas))!=EOF){
			if(letra=='\n'){
				printf("\n");
			}else{
				putchar(letra);
			}
		}
		fclose(multicinema_salas);
	}
}

void buscarPelicula(peliculas peliculitas[],int tam)
{
	bool x= false;
	int contador=0;
	int posicion;
	fflush(stdin);
	printf("Ingrese pelicula a buscar \n ");
	scanf("%d", &peliculitas[0].buscar);
	for(int i=0;i<tam;i++)
	{
		if(peliculitas[0].buscar==peliculitas[i].id)
		{
			x= true;
			posicion =i;
		}
		
		
	}
	if(x==true){
		
		printf("%s \n ",sala[posicion].peli.nombre);
		printf("%s \n ",sala[posicion].peli.reparto);
		printf("%s \n ",sala[posicion].peli.categoria);
		printf("%s \n ",sala[posicion].peli.clasificacion);

	}else{
		printf("La pelicula no esta en la lista \n");
	}
	
}
