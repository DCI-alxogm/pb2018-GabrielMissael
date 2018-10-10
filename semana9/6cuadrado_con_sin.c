//Creado por Gabriel Missael Barco
#include <stdio.h>

//creamos funcion CON salida y SIN entrada
float cuadrado(){
        float  xx, x;
	printf("\nIntroduce un número: \n");
        scanf("%f", &x);
        xx = x*x;
	return xx;
}

int main(){
	float r;

	r=cuadrado();
	printf("Su cuadrado es: %f \n", r);

        return 0;
}


