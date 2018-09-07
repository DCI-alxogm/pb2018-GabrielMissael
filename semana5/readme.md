Creado por Gabriel Missael Barco el 06/09/2018

Esta es la semana 5, y realicé un total de 7 programas: 3 ejemplos y 4 ejercicios.

Primero hablaremos de los ejemplos. El ejemplo 1 se titula "1ejemplo_for_1.c". Este programa te permite hacer una serie de transformaciones de temperatura de grados Celsius a grados kelvin, esto en un intervalo un número n de veces. Este proceso se repite hasta diez veces, si el usuario lo desea. Para tal fin, todo el programa está dentro de un ciclo while; básicamente mientras el usuario diga escriba que si (1), se seguirá ejecutando el while. Dentro del while hay un programa que, usando un for desde 0 hasta n (número deseado de conversiones en el intervalo), se transforma C a K, se imprime, y se le suma a C delta (que es el tamaño del intervalo entre el número de conversiones n).

El ejemplo 2 "2ejemplo_2.c", es un simple programa que calculara la función exponencial desde el 1 hasta el 10, esto usando un ciclo for:

	for(int i=0 ; i<n ; i++){
		//claculamos la funcion exponencial de i		
		exp_=exp(i);
		//imprimimos i y su resultado
		printf("%i \t %f \n", i, exp_);	
	}

El ejemplo 3 "3ejemplo_for_anidado.c" es un programa simple de un for dentro de otro. Solo multiplica i*j, siendo i el contador del for exterior y j el contador del for interior. Imprime cada resultado.

El primer ejercicio "4ejercicio_math.c" es un programa más elaborado que los anteriores. Calcula las siguientes funciones: log, exp, sin, cos y raíz cuadrada. Esto, para un número x que pertenece a un intervalo, cada cierto espaciado "n", todos estos datos proporcionados por el usuario. Primero se pide el inicio, el fin y el espaciado. Después, con un ciclo for se va desde i=1 hasta i=(fin-ini) /n, cada iteración suma i++ y se evalúa x=ini+i*n. Finalmente se imprime los resultados de todas las funciones para esta x, y así para cada una de las x.

El segundo ejercicio, "5ejercicio_factorial" puede calcular el factorial de un número, y repetirse hasta 20 veces si el usuario quiere calcular más factoriales, esto se logra poniendo la parte principal del código dentro de un while preguntando al usuario si quiere calcular otro factorial cada que se llega al final del ciclo. Para calcular el factorial, se le pide un numero 'n' al usuario. Creamos una variable x=1, y con un ciclo for multiplicamos desde x*1 hasta x*n. De esta manera obtenemos el resultado y lo imprimimos.

El tercer ejercicio, titulado "6ejercicio_primos.c", calcula los números primos dentro de un intervalo proporcionado por el usuario. Para tal fin, primero preguntamos el inicio y el fin de dicho intervalo, y luego vamos checando de uno en uno con un ciclo for donde i=inicio; i<=fin ; i++. Dentro de ese ciclo, checaremos si dicho número i es divisible entre algún número menor o igual a su raíz cuadrada, esto con un ciclo for desde 2 hasta su raíz, y si no es divisible, significa que es primo, por lo que lo imprimiremos y le sumaremos uno a nuestro contador. Pondremos un salto de línea cada 10 números primos.

El cuarto y último ejercicio, titulado "7ejercicio_binario.c" es un programa que puede hacer dos cosas:

1)convertir binario a decimal

2)convertir decimal binario

Para esto, se usa un switch y se le pregunta al usuario. 

Primero explicaremos como convertir binario a decimal. Tenemos el número binario, por ejemplo, 10111 (23), y realizaremos lo siguiente: tenemos un contador count=0 y una variable decimal=0 y una variable n, que será el número binario; si el numero binario n%10==1 significa que ultimo digito es 1, entonces sumaremos decimal+=2^(count), y después haremos binario/10, eliminando así el ultimo digito. Se hará esto hasta que binario==0, y tendremos guardado en decimal su equivalente en decimal. 

Ahora explicaremos convertir decimal a binario, se hace un proceso parecido al anterior. Tenemos la variable decimal donde tenemos el número que da el usuario, count=0, bin [100] que es una string, para guardar el numero binario. Si el número decimal%2==0, entonces bin[count]=0, de lo contrario, bin[count]=1. Después count++. Luego, decimal/=2, y se repite el proceso anterior hasta que decimal==0. Esto nos dará el número binario, pero estará invertido, y por eso lo guardamos en una string. Simplemente la imprimiremos al revés, es decir, desde count-1 hasta 0.

 Y eso es toda esta semana.

