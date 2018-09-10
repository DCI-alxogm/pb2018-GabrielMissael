#include<stdio.h>

int main(){
        //pedimos el tamaño del arreglo
        printf("Hola, este programa imprimirá 10 números multiplicados por 2  \n");

        //creamos el arreglo tamaño 10
        float numero[10];

	printf ("A continuación escribe 10 números: \n");
        for(int i=0 ; i<10 ; i++){
		//inicializamos el arrreglo en 0.0
                numero[i]=0.0;
		//pedimos cada elemento del arreglo
		scanf("%f", &numero[i]);
		//lo multiplicamos por 2
		numero[i]*=2;
        }


        //Imprimimos cada elemento del arreglo multiplicado por 2
        printf("\n Los numeros multiplicados por dos son: \n");
        for (int i=0 ; i<10 ; i++){
                printf("%f  ", numero[i]);
        }
        printf("\n");

        return 0;
}

