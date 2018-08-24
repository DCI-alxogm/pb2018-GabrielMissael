//creado por Gabriel Missael Barco el 22/08/18

//incluimos las librerias necesarias
#include <stdio.h>

int main(){
	//declaramos las variables necesarias
	int N;
	//solicitamos un numero entero;
	printf("Introduce un numero entero; ");
	scanf("%i", &N);
	//si la division entre 2 es exacta, entonces es par, sino, es impar	
	if(N%2==0){
		printf("Es par \n");	
	}
	else{
		printf("Es impar \n");
	}
	return 0;
}
