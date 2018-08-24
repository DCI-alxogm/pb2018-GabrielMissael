//hechoi por gabriel Missael Barco el 22/08/2018

//incluimos librerias necesarias
#include <stdio.h>

int main(){
	//declaramos las variables necesarias	
	int a;

	//solicitamos un numero al usuario
	printf("Introduzca un numero entero: ");
	scanf("%i", &a);
	
	//si es par sumamos uno
	if(a%2==0){
		a+=1;	
	}
	//imprimimos el numero
	printf("\n %i \n", a);
	return 0;
}
