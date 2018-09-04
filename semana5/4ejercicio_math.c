//creado por Gabriel Missael Barco el 04/09/2018
#include <stdio.h>
#include <math.h>

//esta función evalua cada operación con un número determinado
void evaluar(double a){	
	double res;
	printf("\nPara x = %f", a);
	res = exp(a);
	printf("\nExponencial es igual a %f", res);
	res = log10(a);
	printf("\nLogaritmo es igual a %f", res);
	res = sin(a);
	printf("\nSeno es igual a %f",res);
	res = cos(a);
	printf("\nCoseno es igual a %f", res);
	res = sqrt(a);
	printf("\nRaíz cuadrada es igual a %f\n", res);
}

int main(){
	//presentamos el programa al usuario y pedimos valor inicial
	printf("\nHola, a continuación se evaluará una variable 'x' con las funciones exponencial, logartimica, seno, coseno y raiz cuadrada, respectivamente. Por favor, introduzca la variable x: ");
	double x, aux, fin, n, delta;
	scanf("%lf", &x);
	//pedimos valor final
	printf("\nEscriba el valor final: ");
	scanf("%lf", &fin);
	//pedimos el espacio
	printf("\nEscriba el espaciado deseado para el intervalo: ");
	scanf("%lf", &n);
	//inciamos el ciclo para cada valor
	for(int i=0 ; (x+n*i)<=fin ; i++){
		//calculamos el valor de x		
		aux = x+n*i;
		//evaluamos
		evaluar(aux);		
	}
	printf("\n Tenga buen dia\n");
	return 0;
}
