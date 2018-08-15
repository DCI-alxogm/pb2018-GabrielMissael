//Creado el 15/08/18 por Gabriel Missael Barco

#include <stdio.h>

int main(){
	//se declaran las variables necesarias para las operaciones a relizar	
	float a=0.0, b=0.0, c=0.0, d=0.0, e=0.0;

	//se solicitan los valores de las variables al usuario
	printf("Hola, por favor introduce cuatro numeros reales: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);

	//Se dan los resultados de las operaciones
	e = (a + b) * c / d;
	printf("1.- El resultado de la operación (a+b)*c/d es %f \n", e);

	e = ((a + b) * c) / d;
	printf("2.- El resultado de la operación ((a+b)*c)/d es %f \n", e);

	e = (a + b) * c / d;
	printf("3.- El resultado de la operación (a+b)*c/d es %f \n", e);

	e = a + (b * c) / d;
	printf("4.- El resultado de la operación a+(b*c)/d es %f \n", e);

	return 0;
}
