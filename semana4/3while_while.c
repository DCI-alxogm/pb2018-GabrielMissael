//Creado por Gabriel Missael Barco

#include <stdio.h>

int main(){
	//delcaramos las variables necesarias		
	float temp_c, temp_k, inicial=100 , final=200, delta;
	int n=10, op=1;
	//obtenemos el valor delta que se irá sumando a "inicial"
	delta = (final-inicial)/n;
	//este es el ciclo que el usuario decidirá si repetir o no	
	while(op==1){
		temp_k=0;
		temp_c=inicial;
		//este ciclo hace las conversiones en el intervalo
		while(temp_c<=final){
			temp_k=temp_c+273.15;
			printf("%f %f\n", temp_c, temp_k);
			temp_c=temp_c+delta;
		}
	//preguntamos si repetimos el proceso	
	printf("Deseas hacer otra operación?, Presiona 1 para si, presiona 2 para no\n");
	scanf("%i", &op);
	}
	return 0;
}
