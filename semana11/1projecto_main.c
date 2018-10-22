#include<stdio.h>
#include <stdlib.h>

void print(double **aux, int w, int a);
double **itera(double **aux, int w);
double **iniciar(double **aux, int w, float a, float b, float c, float d);

int main(){
	double **mat;
	float A, B, C, D, E_a=10000000, e;
	int matriz, n;
	FILE *read;
	
	read = fopen("datos.txt", "r");

	fscanf(read, "%f %f %f %f %i %i %f", &A, &B, &C, &D, &n, &matriz, &e);
	//printf("\n %f %f %f %f %f %i %i\n", A, B, C, D, N, n, matriz);	
	n+=2;

	fclose(read);
	
	mat = (double **) malloc (n*sizeof(double*));
	for(int i=0 ; i<n ; i++){
		mat[i] = (double *) malloc (n*sizeof(double));
	}
	
	if(matriz==1){
		for(int i=1 ; i<n ; i++){
			for(int j=1 ; j<n ; j++)
			fscanf(read, "%lf", &mat[i][j]);
		}
	}
	
	mat=iniciar(mat, n, A, B, C, D);
	
	int count=0;
	while(E_a>e && count<2){
		print(mat, n, count);		
		mat=itera(mat, n);
		E_a=mat[n-1][n-1];
		count++;
	}

	return 0;
}
