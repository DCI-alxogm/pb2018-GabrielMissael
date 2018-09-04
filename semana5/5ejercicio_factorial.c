//Creado por Gabriel Missael Barco el 04/09/2018

//incluimos las librerias deseadas
#include <stdio.h>

void factorial(int a){
	long long res=1;
	for(int i=1 ; i<a+1 ; i++){
		res*=i;	
	}	
	printf("\n%i! = %lld", a, res);
}

int main(){
	
	int n, sig=1, count=0;
	//presentamos el programa al usuario	
	printf("Hola, este programa te permite calcular el factorial de un numero\n");
	
	//este ciclo se realizará mientras el usuario quiera, no mas de 20 veces
	while(sig==1){
		count++;
		// sale si se ha hecho mas de 20 veces		
		if(count>20){
			printf("\nNumero de ejecuciones limite excedido");	
			return 1;		
		}
		//pedimos el numero a procesar
		printf("\nIntroduce un número entero: ");
		scanf("%i", &n);
		//se manda a una funcionn
		factorial(n);
		//se pregunta si se quiere realizar de nuevo
		printf("\n¿Quieres realizar otro calculo?, escribe 1 para si, y 2 para no: ");	
		scanf("%i", &sig);
	}	
return 0;
}
