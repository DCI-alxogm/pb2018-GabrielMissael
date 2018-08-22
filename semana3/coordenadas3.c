//Creado el 20/08/2018 por Gabriel Missael Barco

#include <stdio.h>
#include <math.h>

double grado(double a){
	return (a*3.141592653589)/180;	
}

int main(){
	//declaramos variables para coordenadas cartesianas (x,y,z) a esfericas (r,a,l)
	double x=0.0, y=0.0, z=0.0, r=0.0, a=0.0, l=0.0, X=0.0, Y=0.0, Z=0.0, aux=0.0;
	
	//preguntamos el valor de las coordenadas cartesianas
	printf("Hola, introduce los valores de x, y, z: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	
	//realizamos las operaciones correspondientes
	aux = (x*x)+(y*y)+(z*z);
	r = sqrt(aux);
	aux = (sqrt(x*x+y*y))/z;
	printf("\n prueba = %lf \n", aux);
	a = atan(aux);
	l = atan (y/x);
	printf("De cartesianas a esfericas obtenemos que \n r= %lf \n a=%lf \n l=%lf \n", r, a, l);	
	X = r*sin(a)*cos(l);
	Y = r*sin(a)*sin(l);
	Z = r*cos(a);
	printf("De coordenadas esfericas a cartesianas obtenemos \n X= %lf \n Y=%lf \n Z=%lf \n", X, Y, Z);

return 0;
}
