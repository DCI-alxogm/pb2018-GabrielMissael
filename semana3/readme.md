Creado el 24/08/2018 por Gabriel Missael Barco

Esta semana realizamos un total de 8 programas, los cuales analizaremos a continuación.

El primer programa, llamado "1temperatura.c" es un programa que sirve para convertir una temperatura dada en grados Celsius a otros sistemas de medición, específicamente a kelvin y Fahrenheit. Las variables usadas son de tipo float ya que el usuario puede proporcionar la temperatura con decimales, y aunque no fuera así, sería necesario para las conversiones. Básicamente se le solicita una temperatura al usuario y se convierten con las siguientes operaciones: 
	
	f = (c*1.8)+32;
	k = c + 273.15;

Finalmente, se imprimen los resultados y la comprobación de estos (volviendo a transformar a grados Celsius).

El segundo programa se titula "2operaciones.c", en el cual aprendimos algunas funciones incluidas en la librería math.h, como las funciones trigonométricas. Después de incluir las librerías y declarar las variables correspondientes, se le solicita al usuario que introduzca el valor de la variable a operar. Posteriormente se realizaron tres operaciones: exp(x), cos(x)+2*tan(x/2), y  ln(x) + 3x², las cuales se presentan así en el código: 
	
	y1 = exp(x);
	y2 = cos(grado(x)) + 2*(tan(grado(x/2.0)));
	y3 = log(x) + 3*(x*x);
	
Como podemos observar, dentro de las funciones trigonométricas, hay una función llamada "grado(x)", esto es debido a que la computadora trabaja en radianes, y para evitar estar escribiendo la conversión de grados a radianes cada vez que se ocupara, mejor se incluyó una función en el programa, la cual básicamente dado un numero 'a', regresa el valor de ese número expresado en radianes:
	
	double grado(double a){
		return (a*3.141592653589)/180;	
	}
	
La función es de tipo double para que nos devuelva un valor de tipo punto flotante.

El tercer programa se llama "3coordenadas.c", el cual convierte coordenadas cartesianas a esféricas. Para tal fin, después de declaras las variables para las coordenadas cartesianas (x, y, z) y para las esféricas (r, a, l), se le solicita al usuario que proporcione (x, y, z), las cuales pueden ser enteras o con decimales. Posteriormente se realizan las operaciones pertinentes: 
	
	r = sqrt((x*x)+(y*y)+(z*z));
	a = atan(sqrt(x*x+y*y))/z);
	l = atan (y/x);
	
De esta manera obtenemos los valores de (x, y, z) en su equivalente en coordenadas esféricas (r, a, l) y se imprimen para que el usuario pueda conocerlas. Además, con fines de comprobación, se vuelven a convertir estas coordenadas esféricas obtenidas a coordenadas cartesianas, con las siguientes operaciones equivalentes:
	
	X = r*sin(a)*cos(l);
	Y = r*sin(a)*sin(l);
	Z = r*cos(a);
	
De esta manera se podía estar seguro de no tener un error.

Estos últimos tres programas fueron los que se elaboraron en la primera clase de esta semana, en la segunda clase elaboramos un total de 5 programas: 4 ejemplos de funciones vistas en clase y uno que juntaba la función switch con algunos programas elaborados anteriormente. El primer ejemplo, llamado "4ejemplo_uno.c" es una demostración muy sencilla de los comandos:
	
	if(condicion){
		proceso1	
	}
	else{
		proceso2	
	}
	
Básicamente, se le solicita al usuario un numero entero, y posteriormente se imprimía en pantalla si dicho número era par o impar. Para tal fin, se usó la condicion if(N%2==0), que usa la operación modulo (%), la cual te da el resto de dividir a entre b (en este caso el numero proporcionado por el usuario entre 2), si el producto módulo de dividir entre dos era 0, entonces se tenía un numero par, de lo contrario, era un número impar.

El segundo ejemplo, llamado "5ejemplo_dos.c" es otro ejemplo de lo que se puede hacer con las condicionales if o else, y básicamente también se le solicita al usuario un numero entero, para posteriormente revisar si es par o no; pero en lugar de imprimir si es par o no en pantalla, se le sumara +1 si es par, y se dejara igual si no lo es. Al final del programa se imprime el número.

El tercer ejemplo realizado se titula "6ejemplo_tres.c" en el cual aprendimos a usar los comparativos, los cuales son:
	1. Igual a "=="
	2. Menor que "<"
	3. Mayor que "<"
Se le pide al usuario que ingrese dos números enteros. Una vez ingresados, se procesan los números en el siguiente proceso: 

	if(n1==n2){
		printf("Resultado: %d = %d \n", n1, n2);
	}
	else if(n1>n2){
		printf("Resultado: %d > %d \n", n1, n2);
	}
	else{
		printf("Resultado: %d < %d \n", n1, n2);
	}
	
Yo lo describiría como filtros. Si no se cumple el primer "if", entonces, solo si este no se cumple, se revisa si el siguiente condicional se cumple con el comando "else if ()", finalmente, si este no se cumple, se ejecuta la última acción. Si en algún punto de la cadena se cumple una condicional, se ejecuta el proceso que este contenido en este y posteriormente se ignoran las demás opciones. Se pueden agregar tantas partes como se desee. Gracias a este filtro, se imprimirá en pantalla si a==b, a>b o a<b.

El último ejemplo, "7ejemplo_4.c", consiste en lo siguiente: se le solicitará al usuario que introduzca una letra. Si revisara si esta es una vocal o si es una consonante. El resultado se imprimirá en pantalla. Cabe recalcar lo nuevo aprendido en este ejemplo:

	vocal = ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
	VOCAL = ( c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
	
Estas dos son las variables donde se guarda el resultado. Hay una para revisar las vocales mayúsculas y otra para las minúsculas. Lo que está entre paréntesis de, por ejemplo, la primera, es equivalente "c es igual a "a", "e", "i", "o", o a "u". Si es igual a alguna, la variable "vocal" será igual a true (es decir, a uno). Lo mismo con "VOCAL" pero con mayúsculas. Gracias a esto, si es vocal, una de las dos variables será cierta y se podrá saber el resultado.

	if(VOCAL || vocal){
		printf("%c es una vocal \n", c);	
	}
	else{
		printf("%c es una consonante \n", c);
	}
	
Finalmente, el ultimo código elaborado fue "8conversiones.c", el cual trata de un programa que le da al usuario las siguientes opciones:
	1) Convertir grados Celsius a Fahrenheit y a kelvin
	2) convertir coordenadas cartesianas a esféricas
	3) convertir coordenadas cartesianas a polares
La opción a y b son de códigos que ya habíamos hecho anteriormente, el 1 corresponde a "1temperatura.c" y el 2 a "3coordenadas.c". El tercer código se explicará más adelante. Para poder hacer una selección entre la opción 1, 2 o 3 se pudo haber usado condiciones tipo if else, pero en su lugar usamos la opción switch(x). Básicamente esta opción, dependiendo del valor de la variable "x", realizara un conjunto de operaciones dentro de su estructura, los cuales están agrupados en casos (case). Por ejemplo, si x puede tomar los valores de 1,2 o 3 (como es el caso de este programa, existirá "case 1", "case 2", "case 3" y "default". Cada uno del caso corresponde a un conjunto de acciones y default es que hacer si x tiene un valor distinto de las opciones. Dentro de cada caso está el comando break, para salir del switch. De manera general, se ve asi:

	switch(w){
	case 1:
		proceso 1
	case 2:
		proceso 2
	case 3 :
		proceso 3
	default :
		printf("Opcion inexistente \n");

	}
	
Con esto, le pedimos al usuario que escriba el numero de la opción que quiere realizar. Los subprogramas 1 y 2 se explicaron anteriormente. El subprograma 3, hace lo siguiente: dadas dos coordenadas cartesianas en el plano (x, y), se imprimirán en su forma angular (ángulo y distancia). Primero se le solicita al usuario los valores de (x, y), posteriormente se realizan las siguientes operaciones para obtener el Angulo:
	
		if(x!=0){
			ang = atan(y/x);
			ang = (ang*180)/3.1416;
		}
		else{
			ang = 90;
		}
 Se pone el condicional de que x no sea igual a cero, ya que algo entre cero no está definido y daría lugar a un error, y se pone el else porque sabemos que tangente de algo indefinido es 90. Para obtener la distancia se usa el teorema de Pitágoras: 
 	
		r = sqrt(x*x+y*y);
		
Por último, se hacen ajustes al ángulo, ya que el valor obtenido será respecto al eje "x", del lado más cercano, ya sea hacia arriba o hacia abajo. Por ejemplo, en el tercer cuadrante daría "-15", cuando el valor medido convencionalmente seria 195. A continuación, la parte del código que hace eso:

		if(x<0 && y>0){
			ang = 180+ang;
		}
		else if(x<0 && y<0){
			ang = ang+180;
		}
		else if(x>0 && y<0){
			ang = 360+ang;
		}	

Finalmente se imprime el resultado.

También hay un programa llamado "ejemplo_switch.c" el cual es un ejemplo simple de la opción switch.
