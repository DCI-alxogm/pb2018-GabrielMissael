//Creado por Gabriel Missael Barco el 22/10/18
/*
Este codigo sirve para calcular el equilibrio termico de una placa en dos dimensiones, considerndo que esta aislada y solo recibe calor de sus 4 bordes (diferente en cada borde)
*/

#include<stdio.h>
#include <stdlib.h>
#include "proyect.h"


//Aqui se tiene la estructura general del programa
int main(){
	
	//Declaramos la matriz que describe a la placa	
	double **mat;

	//A, B, C y D son las temperaturas de cada uno de los 4 bordes
	//"e" es el parametro epsilon, un condicion de paro
	float A, B, C, D, E_a=10000000, e;

	//la variable matriz sirve para indicar si se leeran valore iniciales de la placa (será "1") o si se inicia todo en 0 (será "0")
	int matriz, n;

	//Creamos archivo para lectura
	FILE *read;
	read = fopen("datos.ini", "r");

	//Obtenemos valores iniciales
	fscanf(read, "%f %f %f %f %i %i %f", &A, &B, &C, &D, &n, &matriz, &e);
	n+=2;
		
	//Creamos matriz de tipo double usando apuntadores
	mat = (double **) malloc (n*sizeof(double*));
	for(int i=0 ; i<n ; i++){
		mat[i] = (double *) malloc (n*sizeof(double));
	}
	
	//Inicializamos la matriz	
	mat=iniciar(mat, n, A, B, C, D);

	//Se leen valores iniciales de la matriz si es necesario
	if(matriz==1){
		for(int i=1 ; i<n-1 ; i++){
			for(int j=1 ; j<n-1 ; j++)
			fscanf(read, "%lf", &mat[i][j]);
		}
	}
	
	//Cerramos archivo de lectura
	fclose(read);

	int count=0;

	//Se realizará este ciclo maximo 200 veces o hasta que el epsilon maximo obtenido en la iteración sea menor al parametro epsilon "e" definido por el usuario
	while(E_a>e && count<500){
		//Imprimimos la iteracion en un archivo, solo crearemos a los mas 25 archivos, maximo, por simplicidad
		if(count<260 && count%10==0){		
			print(mat, n, count/10);
		}
		//Realizamos una nueva iteración		
		mat=itera(mat, n);
	
		//Obtenemos el valor epsilon maximo en la nueva iteración
		E_a=mat[n-1][n-1];

		//llevamos la cuenta de en que iteración vamos
		count++;
		if(E_a>e){
			print(mat, n, 300);	
		}
	}
	

	//Imprimimos cuantas iteraciones fueron necesarias
	printf("\n%i\n", count);

	return 0;
}
