
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 2


typedef struct{
	int id;
	char procesador[20];
	char marca[20];
	int precio;

}eNotebook;

int aplicarDescuento(float precioOriginal);
int contarCaracteres(char cadena[],char caracter);
int ordenarEstructura(eNotebook estructura[],int tam);

int main(void) {


	float precio=100;
	char cadena[10]= "Buenaasa";
	eNotebook notebook[TAM]= {{10,"AMD","Lenovo",500},
							   20,"Intel","Mac"};


	ordenarEstructura(notebook,TAM);
	printf("%d  %s   %s   %d",notebook->id,notebook->procesador,notebook->marca,notebook->precio);



   //primera funcion
	precio = aplicarDescuento(precio);;
	printf("%.2f\n",precio);
    system("PAUSE");

    //segunda funcion
    printf("%d\n",contarCaracteres(cadena,'a'));
    system("PAUSE");

    //tercera funcion

	return EXIT_SUCCESS;
}
int aplicarDescuento(float precioOriginal){

	precioOriginal =(float) precioOriginal * 0.95;

	return precioOriginal;

}
int contarCaracteres(char cadena[],char caracter){
	int contador=0;

	for (int i =0;i<strlen(cadena);i++){
		if(caracter == cadena[i]){
			contador++;
		}
	}
	return contador;
}
int ordenarEstructura(eNotebook estructura[],int tam){
	char auxMarca[20];
	int todoOk=0;
	if(estructura != NULL && tam >0){

	for (int i =0;i<tam;i++){
		for (int j=i+1;j<tam;j++){
			if(estructura[i].marca == estructura[j].marca){

			}else{
				*auxMarca = *estructura[i].marca;
			}
			todoOk=1;
		}
	}
	}
	return todoOk;
}
