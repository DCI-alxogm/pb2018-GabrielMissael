Creado por Gabriel Missael Barco el 06/07/2018

Esta es la semana 5, y realicé un total de 7 programas: 4 ejemplos y 3 ejercicios.

Primero hablaremos de los ejemplos. El ejemplo 1 se titula "1ejemplo_for_1.c". Este programa te permite hacer una serie de tranfrormaciónes de temperatura de grados celsius a grados kelvin, esto en un intervalo un número n de veces. Este proceso se repite hasta diesz veces, si el usuario lo desea. Para tal fin, todo el programa esta dentro de un ciclo while; basicamente mientras el usuario diga escriba que si(1), se seguira ejecutando el while. Dentro del while hay un programa que, usando un for desde 0 hasta n(numero deseado de conversionbes en el intervalo), se transforma C a K, se imprime, y se le suma a C delta (que es el tamaño del intervalo entre el numero de conversiones n).

El ejemplo 2 "2ejemplo_2.c", es un simple programa que calculaŕa la funcion exponencial desde el 1 hasta el 10, esto usando un ciclo for:

	for(int i=0 ; i<n ; i++){
		//claculamos la funcion exponencial de i		
		exp_=exp(i);
		//imprimimos i y su resultado
		printf("%i \t %f \n", i, exp_);	
	}

El ejemplo 3 "3ejemplo_for_anidado.c" es un  programa simple de un for dentro de otro. Solo multiplica i*j, siendo i el contador del for exterior y j el contador del for interior.

El ejemplo 4 "4ejemplo_math.c" es un programa mas elaborado que re
