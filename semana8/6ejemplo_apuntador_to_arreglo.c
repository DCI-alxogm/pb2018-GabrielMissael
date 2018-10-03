#include <stdio.h>
#include <stdlib.h>

int main(){

	int sum=0, *num;

	printf("\n Introduce 6 números enteros:\n");

	num = (int*) malloc(6*sizeof(int));

	for(int i=0 ; i<6 ; i++){
		scanf("%i", &num[i]);
		sum += num[i];
	} 

	printf("\n Suma = %i\n ", sum);
	return 0;
}
