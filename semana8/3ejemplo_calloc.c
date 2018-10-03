//Creado por Gabriel Missael Barco el 03/10/18
#include <stdio.h>
#include <stdlib.h>

int main(){
	//Creamos las variables y un apuntador
	int N, *ptr, sum=0;
	
	//Pedimos el tamaño del arreglo
	printf("\n Introduce el número de enteros: ");
	scanf("%i", &N);
	
	//Reservamos la memoria para N numeros tipo entero con Calloc
	ptr = (int*) calloc(N, sizeof(int));

	//condicional en caso de que no haya espacio suficiente para reservar
	if(ptr==NULL){
		printf("\n ¡Error! memoria no reservada");
		exit(0);
	}

	//Leemos los N numero y cada uno lo guardamos en una posición de memoria distinto
	
	printf("\n Introduce los elementos del arreglo: ");
	for(int i=0 ; i<N ; i++){
		scanf("%i", ptr+i);
		sum += *(ptr+i);
	}

	//imprimimos la suma de los numeros 
	printf("\n Suma de los elementos: %i \n ", sum);

	//liberamos la memoria
	free(ptr);

	return 0;
}
