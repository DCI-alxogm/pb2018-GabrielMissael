//Creado por Gabriel Missael Barco el 06/07/18

//Inlcluimos las librerias necesarias

#include<stdio.h>
#include<math.h>

int main(){
	
	int op=0;
	int binario=0, aux=0, count=0, decimal=0;
	char bin[100];
	printf("\nHola, elige una operación:  \n 1)Converir binario a decimal \n 2)Convertir decimal a binario \n Escribe el número de opción: ");
	scanf("%i", &op);

	switch (op){
		case 1:
		printf("\n Introduce un número binario: ");
		scanf("%i", &binario);
		while(binario>0){
			aux = binario%10;
			if(aux!=0){
				decimal+=pow(2,count);			
			}
			binario/=10;
			count++;				
		}
		printf("\n El equivalente decimal es %i\n", decimal);
		break;
		case 2:
		printf("\nIntroduce un número decimal entero: ");
		scanf("%i", &decimal);
		printf("\n El equivalente binario es: ");
		while(decimal>0){
			if(decimal%2==1){
				bin[count++]='1';		
			}			
			else{
				bin[count++]='0';			
			}
			decimal/=2;
		}
		for(int i=count ; i>0 ; i--){
			printf("%c", bin[i-1]);		
		}
		break;
	}
	printf("\n Hasta luego");
	return 0;
}
