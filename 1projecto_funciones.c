#include<stdio.h>
#include <stdlib.h>

void print(double **aux, int w){
	for(int i=0 ; i<w ; i++){
		for(int j=0 ; j<w ; j++){
			printf("%0.3f ", aux[i][j]);
		}
		printf("\n");		
	}
}
