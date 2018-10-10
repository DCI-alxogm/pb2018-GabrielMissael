#include <stdio.h>
#include <math.h>

float compX(float v,float a){
	return cos(a*(3.1416/180.0))*v;
}

float compY(float v,float a){
	return sin(a*(3.1416/180.0))*v;
}

int get(){
	int N;	
	scanf("%i", &N);
	return N;
}

void resultado(float x,float y){
	float R, A;
	R=sqrt((x*x)+(y*y));
	A=atan(y/x);
	A*=(180/3.1416);
	printf("\nTenemos un vector restultante de magnitud %f y angulo %f \n", R, A);
}

void descripcion(){
	printf("\nEste programa obtiene el vector de fuerza resultante a partir de N vectores, a partir de sus magnitudes y sus angulos en radianes respecto a x. Introduce N: \n");
}

int main(){
	
	int N;
	float r[1000], x[1000], y[1000], a[1000], X, Y;

	for(int i=0 ; i<1000 ; i++){
		x[i]=0;
		y[i]=0;
	}
	
	descripcion();
	N=get();

	printf("Introduce N lineas en el siguiente orden: \n magnitud \t Angulo \n");
	for(int i=0 ; i<N ; i++){
		scanf("%f %f", &r[i], &a[i]);
		x[i]=compX(r[i], a[i]);
		y[i]=compY(r[i], a[i]);
	}	

	for(int i=0 ; i<N ; i++){
		X+=x[i];
		Y+=y[i];	
	}	
	
	resultado(X, Y);
		
	return 0;
}
