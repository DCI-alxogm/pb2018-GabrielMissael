//Elaborado por Gabriel Missael Barco el 03/09/2018
#include <stdio.h>

int main(){
	//declaramos las variables necesarias	
	float temp_K, Temp_C=100, final=200, delta;
	int n, sigue=1, count=0;
	
	//Explicamos al usuario lo que el programa hace
	printf("Hola, en este programa podras convertir temperaturas de grados celsius a grados kelvin, esto entre un intervalo definido, por un numero 'n' de veces");
	//el ciclo es para que el usuario decida cuantas veces realizar las operaciones, siempre y cuando sea menor a 10 veces	
	while(sigue==1){
		//solicitamos en rango		
		printf("\n Escribe el intervalo (inicio fin), con un espacio entre ambos numero: ");
		scanf("%f %f", &Temp_C, &final);
		//solicitamos el nḿero de veces
		printf ("\n Escribe el numero de pasos: ");
		scanf("%i", &n);
		//calculamos delta, que es lo que se irá sumando a la temperatura inicial para alcanzar la final en n operaciones
		delta = (final-Temp_C)/n;
		//en este ciclo se hace la conversion, se imprime, y se suma delta a la temperatura incial, por n veces
		for (int i=0 ; i<n ; i++){
			temp_K = Temp_C + 273.15;
			printf(" \n %f %f",Temp_C, temp_K);
			Temp_C = Temp_C+delta;
		}
		//se le pregunta al usuario si quiere hacer otra conversion
		printf("\n ¿Quieres relizar otras conversiones? Escribe 1 si lo quieres, escribre 2 si no: ");
		scanf("%i", &sigue);
		//se cuenta cuantas veces van
		count++;
		//se lleva 10 o mas veces, se sale del programa
		if(count>10){
			printf("\n Numero de iteraciones excedida  \n");
			return 1;		
		}
	}
	//nos despedimos
	printf("\n Hasta luego \n");
	return 0;
}
