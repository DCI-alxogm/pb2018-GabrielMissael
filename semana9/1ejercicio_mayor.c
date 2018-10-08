//Creado por Gabriel Missael Barco 08/10/18 
#include <stdio.h>
#include<stdlib.h>

int main(){

	//creamos el archivo de lectura, variables y el arreglo necesarios
	FILE *read;
	int N=0, pos;	
	float *num, mayor=-1000000000, *st;
	char aux[20];

	//esta vez abrimos el archivo para ver el número de lineas que tiene el archivo
	read = fopen("num_maximo.txt", "r");
	while(fgets(aux, 20, read)!=NULL){
		N++;	
	}
	fclose(read);

	
	//abrimos el archivo para leer cada número
	read = fopen("num_maximo.txt", "r");

	//Creamos el arreglo de tamaño N
	num = (float*) malloc (N*sizeof(float));

	//leemos N números del archivo
	for(int i=0 ; i<N ; i++){		
		fscanf(read, "%f", num+i);
		//guardamos el mayor a cada momento, con su posición en el arreglo y en la memoria
		if(*(num+i)>mayor){
			mayor=*(num+i);	
			pos=i+1;
			st = num;		
		}
	}
	
	//cerramos el archivo
	fclose(read);

	//imprimimos el resultado
	printf("El número mayor de la lista es: %f \n con posición %x en la memoria \n en el lugar %i del arreglo\n", mayor, st, pos);
	printf("El arreglo es de tamaño: %i \n", N);

	//liberamos la memoria
	free(num);

	return 0;
}
