//Creado por Gabriel Missael Barco

//Incluimos las librerias necesarias
#include <stdio.h>

int main(){
	//Declaramos las variables necesarias
	float temp_C, temp_k, inicial=100, final=200, delta=0;
	int n=0;
	
	delta = (final-inicial)/n;
	temp_C=inicial;
	
	//entramos al ciclo while
	while(temp_C<=final){
		temp_k = temp_C+273.15;
		printf("%f %f\n", temp_C, temp_k);
		temp_C=temp_C+delta;
	}
return 0;
}
