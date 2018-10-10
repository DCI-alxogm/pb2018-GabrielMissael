//Creado por Gabriel Missael Barco
#include <stdio.h>

//creamos funcion SIN salida y CON entrada
void cuadrado(){
        float  xx, x;
	printf("\nIntroduce un número: \n");
        scanf("%f", &x);
        xx = x*x;
        printf("Su cuadrado es: %f \n", xx);
}

int main(){

        cuadrado();

        return 0;
}


