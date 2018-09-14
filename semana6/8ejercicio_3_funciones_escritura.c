//creado por Gabriel Missael Barco el 04/09/2018
#include <stdio.h>
#include <math.h>

FILE *fun;

//esta función evalua cada operación con un número determinado
void evaluar(double a){	
	double res;
	fprintf(fun, "\nPara x = %f", a);
	res = exp(a);
	fprintf(fun, "\nExponencial es igual a %f", res);
	res = log10(a);
	fprintf(fun, "\nLogaritmo es igual a %f", res);
	res = sin(a);
	fprintf(fun, "\nSeno es igual a %f",res);
	res = cos(a);
	fprintf(fun, "\nCoseno es igual a %f", res);
	res = sqrt(a);
	fprintf(fun, "\nRaíz cuadrada es igual a %f\n", res);
}

int main(){
	fun = fopen("funciones.txt", "w");
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
	printf("\n Los resultados se encuentran en el archivo 'función.txt'\n");
	fclose(fun);	
	return 0;
}
