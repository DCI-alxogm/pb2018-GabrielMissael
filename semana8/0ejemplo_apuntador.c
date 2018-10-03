//Creado por Gabriel Missael Barco el 03/10/18 

#include <stdio.h>

int main(){
	//iniciualizamos variable y apuntador	
	int var=20;
	int *ptr;

	//apuntador con posición de var
	ptr = &var;

	printf("\nLa dirección de var es: %x", (int) &var);
	printf("\n Dirección guardada en el apuntador ip: %x", (int)ptr);
	printf("\nEl valor de *ptr: %i\n", *ptr);

	return 0;

}
