#include<stdio.h>

int main(){
        int N;
        //pedimos el tamaño del arreglo
        printf("Hola, este programa imprimirá un arreglo de tamaño N \n pero cada uno de sus elementos al doble \n Escribe el tamaño del arreglo: ");
        scanf("%i", &N);

        //creamos el arreglo tamaño N
        float numero[N];

	printf ("A continuación escribe %i números: \n", N);
        for(int i=0 ; i<N ; i++){
		//inicializamos el arrreglo en 0.0
                numero[i]=0.0;
		//pedimos cada elemento del arreglo
		scanf("%f", &numero[i]);
		//lo multiplicamos por 2
		numero[i]*=2;
        }


        //Imprimimos cada elemento del arreglo multiplicado por 2 en lineas de 10
        printf("\n LOs numeros multiplicados por dos son: \n");
        for (int i=0 ; i<N ; i++){
                printf("%f  ", numero[i]);
                if((i+1)%10==0){
                        printf("\n");
                }
        }
        printf("\n");

        return 0;
}

