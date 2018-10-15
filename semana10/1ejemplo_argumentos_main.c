//Creado por Gabriel Missael Barco el 15/10/18

#include <stdio.h>

int main(int arg, char *argt[]){

	printf("El programa que estas ejecutando es: %s\n", argt[0]);

	if(arg==2){
		printf("El argumento que se dio es: %s \n", argt[1]);
	}
	else if(arg>2){
		printf("Mas argumentos de los necesarios\n");
	}
	else{
		printf("Se requiere de al menos 1 argumento \n");
	}

	return 0;
}
