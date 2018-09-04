//creado por Gabriel Missael Barco

#include <stdio.h>

int main(){
	//declaramos las variables	
	float temp_c, temp_k, inicial=100, final=200, delta;
	int n=10;
	char op[2];

	op[0]='s';
	delta = (final-inicial)/n;
	//ciclo ce proceso
	while(op[0]=='s'){
		temp_k=0;
		temp_c=inicial;
		//ciclo de conversion
		while(temp_c<=final){
			temp_k=temp_c+273.15;
			printf("%f %f\n", temp_c, temp_k);
			temp_c=temp_c+delta;			
		}	
	//Preguntamos si el usuario quiere repetir el proceso	
	printf("Deseas hacer otra operación? (si/no)\n");
	scanf("%s", &op);
	}
	return 0;
}

