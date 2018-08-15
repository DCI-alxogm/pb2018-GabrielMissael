//Creado el 13/08/18 por Gabriel Missael Barco

#include <stdio.h>

int main(){
	int edad=0, aux=0;
	char nombre[30];
	
	printf("Holaaaaa, estimado usuario :)  \n");
	printf("Este es el primer programa interactivo del curso. Introduce tu edad: ");
	scanf("%i", &edad);
	printf("\n Introduce tu nombre: ");
	scanf("%s",&nombre);
	printf("\n %s, tú edad es: %i \n", nombre, edad);
	aux = edad+10;
	printf("\n Tú edad en diez años, es decir, en el 2028,  será: %i \n", aux);

	return 0;
}
