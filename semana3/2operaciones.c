//Creado el 20/08/18 por Gabriel Missael Barco

#include <stdio.h>
#include <math.h>

double grado(double a){
	return (a*3.141592653589)/180;	
}

int main(){
	//declaramos la variable "x" y las v ariables para los resultados de cada función	
	double x=0.0, y1=0.0, y2=0.0, y3=0.0;

	//solicitamos el valor de x
	printf("Introduzca el valor de x: ");
	scanf("%lf", &x);
	
	//realizamos las operaciones
	y1 = exp(x);
	y2 = cos(grado(x)) + 2*(tan(grado(x/2.0)));
	y3 = log(x) + 3*(x*x);

	//imprimimos los resultados
	printf("\n Función exp(x) = %lf \n Función cos(x)+2*tan(x/2) = %lf \n Función ln(x) + 3x² = %lf \n ", y1, y2, y3);

	return 0;
}
