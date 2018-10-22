#include<stdio.h>
#include <stdlib.h>

double **iniciar(double **aux, int w, float a, float b, float c, float d){
	for(int i=1 ; i<w-1 ; i++){
		aux[0][i]=a;
		aux[w-1][i]=c;
		aux[i][0]=d;
		aux[i][w-1]=b;
	}
	for(int i=1 ; i<w-1; i++){
		for(int j=1; j<w-1 ; j++){
			aux[i][j]=0.0;	
		}
	}
	return aux;
}

void print(double **aux, int w, int a){	
	char *name;
	name = (char*) malloc (20*sizeof(char*));
	name[0]='9';
	name[1]=a+'a';
	name[2]='.';
	name[3]='t';
	name[4]='x';
	name[5]='t';
	name[6]='\0';
	char z[7];
	for(int i=0 ; i<7 ; i++){
		z[i]=name[i];
	}	
	printf("\n %s\n", z);
	for(int i=0 ; i<w; i++){
		for(int j=0; j<w ; j++){
			printf("%0.3f\t", aux[i][j]);
		}
		printf("\n");		
	}
	printf("\n");
}

double **itera(double **aux, int w){
	double sum=0, max=0, temp=0, est=0;	
	for(int i=1 ; i<w-1 ; i++){
		for(int j=1 ; j<w-1 ; j++){			
			est=0, temp=0;
			sum=aux[i-1][j]+aux[i+1][j]+aux[i][j-1]+aux[i][j+1];
			est=aux[i][j];			
			aux[i][j]=(sum/4.0);
			temp=(aux[i][j]-est)/aux[i][j];
			if(temp<0){
				temp*=-1;
			}		
			if(temp>max){
				max=temp;
				aux[w-1][w-1]=max;	
			}
		}
	}
	return aux;
}
