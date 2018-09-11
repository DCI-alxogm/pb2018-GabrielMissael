#include <stdio.h>

int main(){
	printf("\n Hola, esta es una base de datos para alumnos que ademas hace un resumen de los datos");
	int N;

	printf("\n Introduce el número de alumnos:");
	scanf("%i", &N);
	
	char aux;
	int edad[N], sex[N], sem[N], semestre[9], hombre=0 , mujer=0, promedio=0, edadsem[9], prom_edad=0;
	int calisem[9];
	float cali[N];

	//inicializamos algunos arreglos en 0
	for(int i=0 ; i<9 ; i++){
		semestre[i]=0;
		edadsem[i]=0;
		calisem[i]=0;
	}

	printf("\n A continuación, introduzca %i lineas con el siguiente orden:", N);
	printf("\n Edad(1-99), Sexo(H-M), Semestre(1-9), promedio actual(0.0-10.0)\n");
	for(int i=0 ; i<N ; i++){
		scanf("%i %c %i %f", &edad[i], &aux, &sem[i], cali[i]);
		if(aux=='H' || aux=='h'){
			sex[i]=0;
			hombre++;
		}
		else{
			sex[i]=1;
			mujer++;		
		}
		//aqui se guarda la suma de las edades por semestre para tener un promedio
		edadsem[sem[i]]+=edad[i];
		//aqui se suma cada edad para tener un promedio global
		prom_edad+=edad[i];
		//esta variable servirá para tener el promedio de calificaciones por semestres
		calisem[sem[i]]+=cali[i];
		//esta es para el promedio general de la universidad
		promedio+=cali[i];
		//esta variable nos dice cuantos estudiantes hay por semestre
		semestre[sem[i]]++;
		//esta variable nos dice cuantos hombres hay
	}
	
	//reportamos información sobre las personas en cada semestre
	printf("\nTotal de estudiantes: %i , De los cuales %i son mujeres y %i son hombres", N, mujer, hombre);
	printf("\n Estudiantes por semestre:");
	for(int i=0 ; i<N ; i++){
		printf("\n Semestre %i°    %i", i+1, semestre[i]);
	}
	int temp = promedio/N;
	printf("\nPromedio general de calificaciones: %f", temp);
	printf("\nPromedio de calificaciones por semestre:");
	for(int i=0 ; i<N ; i++){
		printf("\n Semestre %i°    %f", i+1, calisem[i]/semestre[i]);
	}
	printf("Promedio de edad en general: %f", prom_edad/N);
	printf("\nPromedio de edad por semestre:");
	for(int i=0 ; i<N ; i++){
		printf("\n Semestre %i°    %f", i+1, edadsem[i]/semestre[i]);
	}
	

	return 0;
}
