//Creado el 13/08/18 por Gabriel Missael Barco

#include <stdio.h>

int main(){
	int edad=0, aux=0;
	
	printf("Hola Estimado usuario \n");
	printf("Este es el primer programa interactivo del curso. Introduce tu edad: ");
	scanf("%i", &edad);
	printf("\n Tu edad es: %i \n", edad);
	aux = edad+10;
	printf("\n Tu edad en diez años será: %i \n", aux);

	return 0;
}
