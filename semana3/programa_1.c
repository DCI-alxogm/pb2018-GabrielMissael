//Creado el 20/08/18 por Gabriel Missael Barco

#include <stdio.h>

int main(){
	//creamos las variables correspondientes a cada escala de temperatura y "C" para comprobar
	float c=0, f=0, k=0, C=0;
	
//solicitamos la temperatura en grados celsius al usuario
	printf("Escriba una tempreatura en grados celsius: ");
	scanf("%f", &c);
	
//hacemos las conversiones
	f = (c*1.8)+32;
	k = c + 273.15;
	
//imprimimos los resultados
	printf("\n Fahrenheit: %f \n Kelvin: %f \n", f, k);
	
//Comprobamos	
	C = (f - 32)/1.8;
	printf("Comprobación %f == %f \n", c, C);

	return 0;
}
