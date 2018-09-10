//Creado ppor Gabriel Missael Barco el 10/09/2018
#include<stdio.h>

int main(){
	int N;
	//pedimos el tamaño del arreglo	
	printf("\nEscribe el tamaño del arreglo: ");
	scanf("%i", &N);

	//creamos el arreglo tamaño N
	float numero[N];	

	//inicializamos el arrreglo en 0.0 (ejemplo 1)
	for(int i=0 ; i<N ; i++){
		numero[i]=0.0;
	}
		
	//pedimos cada elemento del arreglo (ejemplo 2)
	printf ("A continuación ewscribe %i números: \n", N);
	for(int i=0 ; i<N ; i++){
		scanf("%f", &numero[i]);
	}	

	//Imprimimos el arreglo en lineas de 5 (ejemplo 3)
	printf("\n Tu arreglo es: \n");
	for (int i=0 ; i<N ; i++){
		printf("%f ", numero[i]);
		if((i+1)%5==0){
			printf("\n");		
		}
	}	
	printf("\n");

	return 0;	
}

