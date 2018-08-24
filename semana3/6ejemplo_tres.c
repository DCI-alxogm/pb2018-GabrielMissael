//creado el 24/08/18 por Gabriel Missael Barco
#include <stdio.h>

int main(){
//delcaramos lñas variables necesarias para el programa	
	int n1, n2;
//solicitamos al usuario sdos numero
	printf("Introduza dos numeros enteros: ");
	scanf("%i %i", &n1, &n2);
//los comparamos e imprimimos si son iguales, o indicamos el menor y el mayor
	if(n1==n2){
		printf("Resultado: %d = %d \n", n1, n2);
	}
	else if(n1>n2){
		printf("Resultado: %d > %d \n", n1, n2);
	}
	else{
		printf("Resultado: %d < %d \n", n1, n2);
	}
	
//termina el programa
	return 0;
}
