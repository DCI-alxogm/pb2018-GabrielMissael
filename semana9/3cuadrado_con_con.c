//Creado por Gabriel Missael Barco
#include <stdio.h>

//creamos funcion CON entrada y CON salida
float cuadrado(float x){
	float  xx;
	xx = x*x;
	return xx;
}	

int main(){

	float x, xx;
	printf("\nIntroduce un número: \n");
	scanf("%f", &x);

	xx = cuadrado(x);
	printf("Su cuadrado es: %f \n", xx);
	
	return 0;
}
