//Creado por Gabriel Missael Barco el 12/09/2018
#include<stdio.h>

int main(){

	char lecture[250];
	float a1, a2;	
	FILE *archivo;

	//indicamos el archivo a leer
	archivo = fopen("test_1.txt", "r");

	//Hay cuatro lineas en nuestro codigo, por lo qgitue leeremos 4 cadenas de caracteres
	for(int i=0 ; i<4 ; i++){
		//leemos
		fgets(lecture, 255, (FILE*)archivo);
		printf("%s", lecture);
	}
	//leemos numeros y los guardamos en variables
	fscanf(archivo, "%f %f", &a1, &a2);
	printf("%f %f \n ", a1, a2);

	fclose(archivo);

	return 0;
}
