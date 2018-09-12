//Creado por Gabriel Missael Barco el 12/09/2018
#include<stdio.h>

int main(){

	//Creamos variables necesarias
	float a1=0.15, a2=100.1234;
	
	//Creamos la variable para el archivo
	FILE *archivo;
	archivo = fopen("test_1.txt", "w");

	//Escribiremos en un archivo
	fputs("\n Gabriel Missael Barco a 12/09/18 \nEsta es una prueba de fputs...", archivo);
	fprintf(archivo, "\n Y esta es una prueba de fprintf y variables: ");

	//probamos con variables
	fprintf(archivo, "\n %f %f", a1, a2);		
	fclose(archivo);

	return 0;
}
