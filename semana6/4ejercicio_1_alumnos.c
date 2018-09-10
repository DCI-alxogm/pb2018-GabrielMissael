#include <stdio.h>

int main(){
	printf("\n Hola, esta es una base de datos para alumnos que hace un resumen de los datos");
	int N, promedio;

	printf("\n Introduce el número de alumnos: %i", &N);
	
	char aux;
	int edad[N], sex[N], sem[N];
	float cali[N]

	printf("\n A continuación, introduzca %i lineas con el siguiente orden:");
	printf("\n Edad(1-99), Sexo(H-M), Semestre(1-9), promedio actual(0.0-10.0)");
	for(int i=0 ; i<N ; i++){
		scanf("%i %c %i %f", &edad[i], &aux, &sem[i], cali[i])
		if(aux=='H' || aux=='h'){
			sex[i]=0;
		}
		else{
			sex[i]=1;		
		}
	}
	
	
	
	return 0;
}
