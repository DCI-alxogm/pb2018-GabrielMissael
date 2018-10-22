#include<stdio.h>
#include <stdlib.h>

void print(double **aux, int w);

int main(){
	double **mat;
	float A, B, C, D, N, s;
	int matriz, n;
	FILE *read;
	
	read = fopen("datos.txt", "r");

	fscanf(read, "%f %f %f %f %f %i %i", &A, &B, &C, &D, &N, &n, &matriz);
	//printf("\n %f %f %f %f %f %i %i\n", A, B, C, D, N, n, matriz);	
	s=N/n;
	n+=2;
	
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
	
	for(int i=1 ; i<n ; i++){
		mat[0][i]=A;
		mat[n-1][i]=C;
		mat[i][0]=D;
		mat[i][n-1]=B;
	}
	
	print(mat, n);
	
}
