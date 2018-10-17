#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Hecho por Gabriel Missael Barco el 17/10/18


//Esta funcion esta escrita en "7ejercicio_2.c"
void cubo(char *nombre_archivo, int num, float esp);


//Los argumentos son ./programa archivo_resultado lado espaciado
int main(int arg, char *argt[]){
	
	printf("El cogigo que se ejecutó es: %s \n", argt[0]);

	char *nombre;
	nombre = argt[1];

	int nume = atof(argt[2]);
	float espa = atof(argt[3]);

	//lamamos la función que realizará el cubo
	cubo(nombre, nume, espa);

	return 0;
}
