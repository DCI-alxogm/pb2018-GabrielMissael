//Creado por Gabriel Missael Barco el 22/08/18
//Incluimos las librerias necesarias
#include <stdio.h>

int main(){

//declaramos las variables necesarias
int a;

//solicitamos al usuario que eliga la opcion correspondiente
printf("Hola, por favor elije una opcion: \n (1) Imprimir frase motivacional \n (2) Dato interesante \n (3) saludar \n Numero de opción: ");
scanf("%i", &a);

//depende de que haya elegido el usuario, se imprime algo
switch(a){
	case 1:
		printf("Puedes lograr lo que tu quieras \n");
		break;
	case 2:
		printf("El país mas grande del mundo es Rusia \n");
		break;
	case 3 :
		printf("Holaaaaaaa \n");
		break;
	default :
		printf("Opcion inexistente \n");
}

printf("Adioooos \n");

return 0;
}
