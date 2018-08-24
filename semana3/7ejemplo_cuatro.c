//creado el 24/08/18 por Gabriel Missael Barco

//incluimos librerias 
#include <stdio.h>

int main(){
	//declaramos una variable que pueda leer una letra y una para verdadero/falso
	char c;
	int vocal, VOCAL;

	//solicitamos al usuario una letra
	printf("Introduce una letra: ");
	scanf("%c", &c);
	
	//si la letra inctroducida es una vocal, una de las dos variables siguientes será cierta
	vocal = ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	VOCAL = ( c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

// se imprime si es una vocal o una consonante
	if(VOCAL || vocal){
		printf("%c es una vocal \n", c);	
	}
	else{
		printf("%c es una consonante \n", c);
	}	
	
	return 0;		
}
