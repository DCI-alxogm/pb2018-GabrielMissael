Creado por Gabriel Missael Barco el 10/10/18

Esta semana hicmos dos cosas importantes, a lo largo de 7 programas. En los primeros 2 codigos, aplicamos lo visto la semana pasada sobre apuntadores, arreglos y memoria dinamica, en dos sencillos ejemplos, "1ejericico_mayor.c", con el cual leiamos N numeros de un archivo e indicabamos cual era el numero mayor, su posición en el arreglo y su posición en la memoria. El segundo ejemplo "2ejercicio_promedio.c" consistia en leer N numeros de un archivo para obtener el promedio de los datos y su desviación estandar. Lo interesante de estos programas es que en lugar de usar arreglos se usaron apuntadores, como se vieron la semana pasada. Un descubrimiento intersante:

	read = fopen("promedio.txt", "r");
	while(fgets(aux, 30, read)!=NULL){
		N++;
	}
	fclose(read);

Este fragmento de codigo nos sirve para contar cuantas lineas der texto tiene un archivo. Esto fue necesario para conocer N en ambos codigos.

En los siguientes 5 codigos aprendimos a usar funciones. Estas pueden ser del tipo:

	tipo funcion(tipo variable);
	void funcion(tipo variable);
	void funcion();
	tipo funcion ();

Las cuales se ejemplifican en los codigos 3, 4, 5 y 6, respectivamente, resolviendo todas el cuadrado de un numero.

Finalmente, el codigo "7ejercicio_4funciones.c" es una aplicacion practica de los cuatro tipos de funciones en un mismo codigo. Este programa obtiene el vector resultante de N vectores actuantes en un punto en dos dimensiones.
