//Creado por Gabriel Missael Barco el 22/10/18
//En este archivo se incluyen todas las funciones usadas en este proyecto



//Declaramos las librerias necesarias
#include<stdio.h>
#include <stdlib.h>



/*Esta funcion sirve para inicializar los valores de la placa y sus costados. Para esta y las funciones que siguen, "aux" es una copia de "mat", la matriz usada en main para la placa y "w" será "n". En este caso, la función debolverá una matriz como resultado, por eso es de tipo double **name():
*/
double **iniciar(double **aux, int w, float a, float b, float c, float d){
	
	//En este ciclo inicializamos los bordes de la placa con los valores de la tempertatura A, B, C y D	
	for(int i=1 ; i<w-1 ; i++){
		aux[0][i]=a;
		aux[w-1][i]=c;
		aux[i][0]=d;
		aux[i][w-1]=b;
	}
	
	//Aqui igualamos todas las casillas de la placa a 0.000
	for(int i=1 ; i<w-1; i++){
		for(int j=1; j<w-1 ; j++){
			aux[i][j]=0.0;	
		}
	}

	//regresamos la matriz ya procesada
	return aux;
}



//Esta funcion nos permite guardar cada iteración en un archivo distinto. Es de tipo void porque no regresa nada
void print(double **aux, int w, int a){	

	//Declaramos el nombre generico de los archivos "9x.txt", donde x toma un valor entre "A" hasta "Z"	
	char name[7]={'9', 'a', '.', 't', 'x', 't', '\0'};

	//Modificamos el nombre generico segun la iteracion
	name[1]=a+'A';
	char *este;
	
	//lo copiamos a una string para poder crear un archivo que se llame asi
	este=name;
	FILE *write;

	//creamos el archivo, de tipo w para escribir
	if(a!=300){
		write = fopen(este, "w");
	}
	if(a==300){
		write = fopen("EQUILIBRIO.txt", "w");
	}

	//En este ciclo, imrimimos la iteracion completa en el archivo
	for(int i=0 ; i<w; i++){
		for(int j=0; j<w ; j++){
			fprintf(write, "%0.3f\t", aux[i][j]);
		}
		fprintf(write, "\n");		
	}
	fprintf(write, "\n");

	//Cerramos el archivo de escritura
	fclose(write);
}



//Esta funcion realiza las iteraciones. Es de tipo double **name() porque regresa una nueva matriz
double **itera(double **aux, int w){
	double sum=0, max=0, temp=0, est=0;	
	
	//Recorremos y calculamos cada punto desde i=1 hasta i=w-1 y desde j=1 hasta j=w-1
	//Tambien vamos calculando el epsilon de cada punto, y guardamos el maximo obtenido	
	for(int i=1 ; i<w-1 ; i++){
		for(int j=1 ; j<w-1 ; j++){			
			est=0, temp=0;
			sum=aux[i-1][j]+aux[i+1][j]+aux[i][j-1]+aux[i][j+1];
			est=aux[i][j];			
			aux[i][j]=(sum/4.0);

			//temp es el epsilon de ese punto
			temp=(aux[i][j]-est)/aux[i][j];
			if(temp<0){
				temp*=-1;
			}		
			if(temp>max){

				//Si el epsilon calculado es mayor a max, se renueva max				
				max=temp;

				//Este valor se salva en una casilla de la matriz que no se utiliza (una esquina)
				aux[w-1][w-1]=max;	
			}
		}
	}

	//regresamos la matriz nueva obtenida
	return aux;
}
