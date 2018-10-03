//Creado por Gabriel Missael Barco el 03/10/18
#include <stdio.h>

int main(){
	//inicializamos un arreglo de tres enteros y un apuntador
	int var[]={10, 100, 200};
	int *ptr;

	//el apuntador guarda la posición inicial del arreglo
	ptr = &var;

	for(int i=0 ; i<3 ; i++){
		//imprimimos posición y valor de la variable var[i]		
		printf("\n La dirección de la variable var[%i] = %x", i, ptr);
		printf("\n El valor de la variable vas[%i] = %i \n", i, *ptr);

		//ptr toma la posición del siguiente valor del arreglo
		ptr++;
	}
	
	return 0;
}
