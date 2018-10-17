Creado por Gabriel Missael Barco el 17/10/19

Esta semana realizamos un total de 7 codigos: 4 ejemplos y 2 ejercicios y un ejercicio extra. 

Primero aprendimos a usar argumentos en la función main, de forma parecida a como se usan en las funciones. EN general, se tendra la forma de:

	main(int arg, char *argt[]);

Donde arg cuenta el numero de argumentos introducidos y *argt[] un apuntador (o arreglo) que guarda cada uno de los argumentos. Posteriormente se puede acceder a cada uno de los argumentos dados de la forma:

	N = argt[i];

Donde N es tipo char e i es el numero del argumento. Si se introdució un argumento numerico, se accede a el de la siguiente forma:

	int N;
	N=atof(argt[i]);

Y con eso, podemos dar los valores con los que el codigo trabajará desde un principio, sin esperar a que el programa los lea. Esto fue aprendido en los tres primeros ejemplos y puestos en practica en el ejercicio "4_ejercicio_1.c". En este ejercicio, se construia una lista de coordenadas en R³, de N³ puntos, equidistantes entre si en los tres ejes coordenados. Esta lista es guarda en un archivo aparte. Son 3 los argumentos introducidos, N, el espacio y el nombre dek archivo introducido.

El segundo tema visto fue compilar programas separados en varios archivos. Para compilarlo, en general:

	gcc -Wall programa1.c programa2.c -o programa.out

Tanto el programa 1 y 2 estaran en el ejecutable. Esto fue aprendido con los ejemplos 5 y aplicado en el programa 2. El programa 2 "7ejercicio.out" hace lo mismo que el programa 4 (ejericio 1, el del cubo de puntos), pero se divide el codigo en dos archivos, un que lee los argumentos, los convierte y llama a una funcion que obtiene los puntos del cubo; el otro codigo contiene dicha funcion.

El ejercicio 3, programa 8, es un codigo que resuelve un sistema polinomial de 3 ecuaciones y tres variables.
