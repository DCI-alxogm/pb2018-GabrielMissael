//Creado por Gabriel Missael Barco el 10/03/18
#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr, n1, n2;
	
	//tamaño del arreglo 1
	printf("\nIntroduce el número de elementos n1: ");
	scanf("%i", &n1);

	//tamaño del arreglo 2
	printf("\nIntroduce el número de elementos n2: ");
	scanf("%i", &n2);

	//reservamos la memoria con:
	ptr= (int*) malloc(n1*sizeof(int));

	printf("\n Dirección de la memoria reservada: \n ");

	//imprimimos los lugares reservados
	for(int i=0 ; i<n1 ; i++){
		printf("%x\t", ptr+i);
	}	
	printf("\n");

	//ajustamos tamaño con n2
	ptr=realloc(ptr, n2);

	//imprimimos los lugares reservados
	for(int i=0 ; i<n2 ; i++){
		printf("%u\t", ptr+i);
	}
	printf("\n");

	free(ptr);

	return 0;
}
