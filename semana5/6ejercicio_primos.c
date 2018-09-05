//Creado por Gabriel Missael Barco

//incluimos las librerias necesairas
#include<stdio.h>
#include<math.h>

int main(){
	//declaramos variables	
	int ini=0, fin=0, count=0;	
	printf("\nHola, este programa te dirá los números primos existentes en un intervalo");
	//pedimos intervalo	
	printf("\nEscribe el inicio y el fin de un intervalo: ");
	scanf("%i %i", &ini, &fin);
	while((fin-ini)>100){
		printf("\nEscribe un intervalo mas pequeño: ");
		scanf("%i %i", &ini, &fin);
	}
	//checamos cada numero en el intervalo	
	for(int i=ini; i<=fin ; i++){		
		int num, primo=1;
		num = sqrt(i);
		//checamos si el numero "i" es divisible entre un número menor o igual a su raiz
		for(int j=2 ; j<=num ; j++){
			if(i%j==0){
				primo=0;			
			}			
		}
		//si es primo, imprimo 
		if(primo==1){
			printf("%i ", i);	
			count++;
			//si el numero de primos que llevo es multiplo de 10, pongo enter
			if(count%10==0){
				printf("\n");		
			}	
		}	 
	}
	printf("\n");
	return 0;
}
