//Creado por Gabriel Missael Barco 03/10/18
#include <stdio.h>

int main(){

	int num[6], sum=0;

	printf("\n Introduce 6 números enteros: ");

	for(int i=0 ; i<6 ; i++){
		scanf("%i", (num+i));
		sum+=*(num+i);
	}

	printf("\n Suma = %i\n ", sum);

	return 0;
}
