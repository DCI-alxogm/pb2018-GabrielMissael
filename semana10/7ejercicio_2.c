#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Creado por Gabriel Missael Barco el 17/10/18

//Esta funcion es llamada en "7ejercicio_1.c"
void cubo(char *nombre_archivo, int num, float esp){

	FILE *fp;
	fp = fopen(nombre_archivo, "w");

	float *punto;

	int aux;
	aux = pow(num, 3);
	punto = (float*) malloc (3*aux*sizeof(float));

	float x=0, y=0, z=0;
	int pos=0;
	for(int i=0 ; i<num ; i++){		
		x=i*esp;		
		for(int j=0 ; j<num ; j++){
			y=j*esp;		
			for(int k=0 ; k<num ; k++){		
				z=k*esp;
				*(punto+pos)=x;
				pos++;
				*(punto+pos)=y;
				pos++;
				*(punto+pos)=z;	
				pos++;
			}		
		}
	}

	for(int i=0; i<aux*3 ; i+=3){
		fprintf(fp,"(%f,%f,%f)\n", *(punto+i), *(punto+i+1), *(punto+i+2));
	}

}
