//Creado por Gabriel Missael Barco la semana del 24 al 30 de Septiembre del 2018
/*Este es un programa que, usando el metodo de Euler, describe de manera aproximada la trayectoria de orbitacion de un planeta en torno a una estrella,
esto conociendo la masa de la estrella, y la posicion en X, Y, Z con las velocidades en X, Y, Z del planeta en un momento determinado
(estas seran las posiciones y velocidades iniciales)
*/

//incluimos las liberarias necesarias
#include <stdio.h>
#include <math.h>

int main(){
	//Los datos seran leidos de un archivo preexistente, llamado "lee.txt"
    FILE *read;
	read = fopen("lee.txt", "r");

	//declaramos las variables necesarias para el programa
	//N será el numero de planetas a analizar
	int N;
	//para el nombre del planeta y del archivo donde se guaradaran los resultados
	char planeta[20];
	//posiciones y velocidades iniciales, masa del planeta y de la estrella, tiempo de evolucion, paso de tiempo y distancia
	double m_est, G, xo, yo, zo, vx, vy, vz, T, h, ro, m_pla;

	//calculamos la constante de gravitacion, que siempre será la misma
	G=4.0*pow(3.14159265359,2);

	//Leemos el numero de planetas a analizar
	fscanf(read, "%i", &N);

    	//realizaremos el siguiente proceso N veces, una vez para cad planeta
	for(int i=0 ; i< N ; i++){
		//leemos el nombre del planeta
		fscanf(read, "%s", &planeta);
		//leemos posiciones y velocidades iniciales en X, Y y Z
		fscanf(read, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vx, &vy, &vz);
		//leemos masa de la estrella, tiempo de evolucion, paso de tiempo y masa del planeta
		fscanf(read, "%lf %lf %lf %lf", &m_est, &T, &h, &m_pla);

       		//Hacemos un ajuste en las velocidades iniciales, porque las velocidades estan dadas en AU/day y necesitamos que esten en AU/year
		vx*=365.242;
		vy*=365.242;
		vz*=365.242;

        	//Creamos el archivo donde estaran los resultados del planeta que se esta analizando
        	FILE *write;
		write = fopen(planeta, "w");

		//el contador será para guardar un menor numero de puntos de la orbita pero conservando la precision del paso de tiempo original
        	int count=0;

        	//el siguiente ciclo es el que implementa el metodo de Euler y describe la orbita con puntos cada cierto tiempo h, hasta alcanzar T
        	for(double i=0.0 ; i<=T+h ; i+=h){

           		//solo se imprimira uno de cada diez puntos
            		if(count%10==0){
                   		//se imrpome el tiempo, las posiciones y velocidades en X, Y y Z
                    		fprintf(write, "\n T=%lf, %lf, %lf, %lf, %lf , %lf , %lf",i, vx, vy, vz, xo, yo, zo);
           	 	}
            		count++;

                	//calculamos las nuevas posiciones
               		xo+=vx*h;
                	yo+=vy*h;
                	zo+=vz*h;

                	//calculamos la distancia a la estrella
                	ro = sqrt(xo*xo + yo*yo + zo*zo);

                	//calculamos nuevas velocidades
                	vx-=h*((G*m_est*xo)/pow(ro, 3));
                	vy-=h*((G*m_est*yo)/pow(ro, 3));
                	vz-=h*((G*m_est*zo)/pow(ro, 3));
        	}

        	//cerramos el archivo del planeta en cuestion
		fclose(write);
	}
	//cerramos el archivo de lectura
	fclose(read);

	return 0;
}
