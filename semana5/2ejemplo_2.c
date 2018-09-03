//realizado por Gabriel Missael Barco el 03/09/18
//iuncluimos las librerias necesarias
#include<stdio.h>
#include<math.h>

int main(){
	//declaramos las variables necesarias	
	float exp_;
	int n=10;
	
	//se realizara el ciclo 10 veces
	for(int i=0 ; i<n ; i++){
		//claculamos la funcion exponencial de i		
		exp_=exp(i);
		//imprimimos i y su resultado
		printf("%i \t %f \n", i, exp_);	
	}
	//terminamos el programa
	return 0;
}
