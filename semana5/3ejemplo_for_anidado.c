//Creado por Gabriel Missael Barco el 04/09/2018

//incluimos las librerias necesarias
#include <stdio.h>
#include <math.h>

int main(){
	//declaramos las variables necesarias
	float res;
	int n=3;
	
	//este ciclo ira desde 0 hasta el 2	
	for(int i=0 ; i<n ; i++){
		//este ciclo igual		
		for(int j=0 ; j<n ; j++){
			res = i*j*1.0;
			//imprimimos i, j y el resultado de res			
			printf("%i %i %f\n", i, j, res);
		}	
	}
	
	return 0;
}
