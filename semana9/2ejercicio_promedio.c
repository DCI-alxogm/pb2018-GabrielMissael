//Creado por Gabriel Missael Barco el 08/10/18
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	//variable para archivo, N numeros, y una string auxiliar	
	FILE *read;
	char aux[30];
	int N;

	//Aqui obtenemos cuantas lineas tiene el archivo, y lo guardamos en N
	read = fopen("promedio.txt", "r");
	while(fgets(aux, 30, read)!=NULL){
		N++;
	}
	fclose(read);
	
	//arreglo y variables para promedio y desviación estandar
	float *num, des, prom, sum=0;
	
	read = fopen("promedio.txt", "r");

	//reservamos la memoria para el arreglo de tamaño N
	num = (float*) malloc (N*sizeof(float));
	
	//leemos N numeros y los vamos sumando
	for(int i=0 ; i<N ; i++){
		fscanf(read, "%f", num+i);
		sum+=*(num+i);
	}
	//cerramos el archivo de lectura
	fclose(read);

	//Obtenemos el promedio
	prom=sum/N;
	sum=0;	
	
	//obtenemos la desviación estandar
	for(int i=0 ; i<N ; i++){
		sum+=pow((*(num+i)-prom),2);
	}
	sum/=N;
	des=sqrt(sum);

	//liberamos la memoria
	free(num);

	//imprimimos resultados
	printf("\n Son %i datos. \n El promedio es: %f \n La desviación estandar: %f \n", N, prom, des);

	return 0;
}
