//Creado por Gabriel Missael Barco el 17/09/18
#include <stdio.h>
#include <math.h>

int main(){
	//declaro variables necesarias y la variable para el archivo de lectura
	FILE *read;
	float a, b, delta, funcion, integral, h;
	int N, k, p;

	//leo los valores del archivo y calculo delta
	read = fopen("lee.txt", "r");
	fscanf(read, "%f %f %i %i %i", &a, &b, &N, &k, &p);
	fclose(read);
	delta = (b-a)/N;
	
	//abro el archivo donde se escribiran los resultados
	FILE *write;
	write = fopen("resultados.txt", "w");
	fprintf(write, "\n f(x) = x^3 \n X			f(X)			I(X)");
	
	//calculo f(x) y su integral, para cada x entre a y b por n veces
	for(float i=a ; i<=b ; i+=delta){
		//f(x)		
		funcion = pow(i, p);
		//integral por metodo del trapecio
		h=(i-a)/k;
		integral = (pow(a, p) + pow(i, p))/2;
		for(int w=1 ; w<k ; w++){
			integral += pow((a+w*h), p);
		}
		integral*=h;
		//escribi los resultados el archivo
		fprintf(write, "\n %f		%f		%f", i, funcion, integral);
	}
	fclose(write);

	return 0;
}
