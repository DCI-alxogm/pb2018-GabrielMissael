#include <stdio.h>

int main(){
	printf("\n Hola, esta es una base de datos para alumnos que ademas hace un resumen de los datos");
	int N;

	printf("\n Introduce el número de alumnos:");
	scanf("%i", &N);

	char aux;
	float edad[N], sex[N], sem[N], semestre[9], hombre=0, mujer=0, promedio=0, edadsem[9], prom_edad=0;
	int act=0;
	float calisem[9], cali[N];

	//inicializamos algunos arreglos en 0
	for(int i=0 ; i<9 ; i++){
		semestre[i]=0;
		edadsem[i]=0;
		calisem[i]=0;
	}

	printf("\n A continuación, introduzca %i lineas con el siguiente orden:", N);
	printf("\n Edad(1-99), Sexo(H-M), Semestre(1-9), promedio actual(0.0-10.0)\n");
	for(int i=0 ; i<N ; i++){
		scanf("%f %c %f %f", &edad[i], &aux, &sem[i], &cali[i]);
		if(aux=='H' || aux=='h'){
			sex[i]=0;
			hombre++;
		}
		else{
			sex[i]=1;
			mujer++;
		}
		act = sem[i]-1;
		//aqui se guarda la suma de las edades por semestre para tener un promedio
		edadsem[act]+=edad[i];
		//aqui se suma cada edad para tener un promedio global
		prom_edad+=edad[i];
		//esta variable servirá para tener el promedio de calificaciones por semestres
		calisem[act]+=cali[i];
		//esta es para el promedio general de la universidad
		promedio+=cali[i];
		//esta variable nos dice cuantos estudiantes hay por semestre
		semestre[act]++;
		//esta variable nos dice cuantos hombres hay
	}
	float temp;
	//reportamos información sobre las personas en cada semestre
	printf("\nTotal de estudiantes: %i , De los cuales %0.0f son mujeres y %0.0f son hombres", N, mujer, hombre);
	printf("\n Estudiantes por semestre:");
	for(int i=0 ; i<8 ; i++){
		printf("\n Semestre %i°    %0.0f", i+1, semestre[i]);
	}


	temp = promedio/N;
	printf("\nPromedio general de calificaciones: %0.2f", temp);
	printf("\nPromedio de calificaciones por semestre:");
	for(int i=0 ; i<8 ; i++){
		if(semestre[i]!=0){
			temp= calisem[i]/semestre[i];
		}
		else{
			temp=0;
		}
		printf("\n Semestre %i°  %0.2f", i+1, temp);
	}
	temp = prom_edad/N;
	printf("\n Promedio de edad en general: %0.2f", temp);
	printf("\n Promedio de edad por semestre:");
	for(int i=0 ; i<8 ; i++){
		if(semestre[i]!=0){
			temp = edadsem[i]/semestre[i];
		}
		else{
			temp=0;
		}
		printf("\n Semestre %i°    %0.2f", i+1, temp);
	}
	printf("\n");

	return 0;
}

