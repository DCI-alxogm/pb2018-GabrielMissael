//Creado el 15/08/18 por Gabriel Missael Barco

#include <stdio.h>

int main(){
	//se declaran las variables necesarias para las operaciones a relizar	
	int a=0, b=0, c=0, d=0, e=0;

	//se solicitan los valores de las variables al usuario
	printf("Hola, por favor introduce cuatro numeros enteros: ");
	scanf("%i %i %i %i", &a, &b, &c, &d);

	//Se dan los resultados de las operaciones
	e = (a + b) * c / d;
	printf("1.- El resultado de la operación (a+b)*c/d es %i \n", e);

	e = ((a + b) * c) / d;
	printf("2.- El resultado de la operación ((a+b)*c)/d es %i \n", e);

	e = (a + b) * c / d;
	printf("3.- El resultado de la operación (a+b)*c/d es %i \n", e);

	e = a + (b * c) / d;
	printf("4.- El resultado de la operación a+(b*c)/d es %i \n", e);

	return 0;
}
