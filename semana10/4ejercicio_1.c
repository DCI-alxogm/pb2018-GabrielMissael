#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int arg, char *argt[]){
	
	printf("El cogigo que se ejecutó es: %s \n", argt[0]);

	char *nombre_archivo;
	nombre_archivo = argt[1];

	FILE *fp;
	fp = fopen(nombre_archivo, "w");

	int num = atof(argt[2]);
	float esp = atof(argt[3]);

	//printf("%s %i %f\n", nombre_archivo, num, esp);

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
	return 0;
}
