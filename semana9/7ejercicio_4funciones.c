//Creado por Gabriel Missael Barco el 10/10/18
#include <stdio.h>
#include <math.h>

//Estas dos funciones son CON entrada y Con salida
float compX(float v,float a){
	return cos(a*(3.1416/180.0))*v;
}

float compY(float v,float a){
	return sin(a*(3.1416/180.0))*v;
}

//Esta funcion solo tiene salida de datos
int get(){
	int N;	
	scanf("%i", &N);
	return N;
}

//Esta funcion solo tiene entra de datos
void resultado(float x,float y){
	float R, A;
	R=sqrt((x*x)+(y*y));
	A=atan(y/x);
	A*=(180/3.1416);
	if(x>0){
		if(A<0)		
		A=A-360;		
	}
	else{
		if(A>0){
			A+=180;		
		}	
		else{
			A=180+A;		
		}
	}
	printf("\nTenemos un vector restultante de magnitud %f y angulo %f \n", R, A);
}

//Esta funcion no tiene ni entrada ni salida de datos
void descripcion(){
	printf("\nEste programa obtiene el vector de fuerza resultante a partir de N vectores, a partir de sus magnitudes y sus angulos respecto a x. Introduce N: \n");
}

int main(){
	
	int N;
	float r[1000], x[1000], y[1000], a[1000], X, Y;
	
	//Describimos el programa al usuario y obtenemo N 
	descripcion();
	N=get();

	//Pedimos N vectores
	printf("Introduce N lineas en el siguiente orden: \n magnitud \t Angulo \n");
	for(int i=0 ; i<N ; i++){
		scanf("%f %f", &r[i], &a[i]);
		//Componentes en X y Y del vector i
		x[i]=compX(r[i], a[i]);
		y[i]=compY(r[i], a[i]);
		//printf("\n %f %f \n", x[i], y[i]);
	}	

	//X y Y del vector resultante
	for(int i=0 ; i<N ; i++){
		X+=x[i];
		Y+=y[i];	
	}	
	
	//Imprimimos magnitud y angulo del vector
	resultado(X, Y);
		
	return 0;
}
