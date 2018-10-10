//Creado por Gabriel Missael Barco
#include <stdio.h>

//creamos funcion SIN salida y CON entrada
void cuadrado(float x){
        float  xx;
        xx = x*x;
        printf("Su cuadrado es: %f \n", xx);
}

int main(){

        float x;
        printf("\nIntroduce un número: \n");
        scanf("%f", &x);

        cuadrado(x);

        return 0;
}

