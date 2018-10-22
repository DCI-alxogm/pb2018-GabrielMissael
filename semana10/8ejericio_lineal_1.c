#include <stdio.h>
#include <stdlib.h>

float A[3][4];

void print(){
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<4 ; j++){		
			printf("%f ", A[i][j]);		
		}
		printf("\n");
	}
	printf("\n");
}

void multi(int pos, int a, int b){
	float aux1, aux2;

	aux1=A[a][pos];
	aux2=-A[b][pos];
	
	for(int i=0 ; i<4 ; i++){
		A[a][i]*=aux2;
		A[b][i]*=aux1;
	}
	print();
}

void sum(int a, int b){
	for(int i=0 ; i <4 ; i++){
		A[a][i]+=A[b][i];
	}
	print();
}

int main(){
	
	float x, y, z;
	
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<4 ; j++){			
			scanf("%f", &A[i][j]);
		}	
	}
	
	multi(0, 0, 1);

	sum(1, 0);

	multi(0, 0, 2);

	sum(2, 0);

	multi(1, 0, 1);

	sum(0, 1);

	multi(1, 2, 1);

	sum(2, 1);

	z=(A[2][2]/A[2][3]);

	printf("\n %f \n", z);
	
}

