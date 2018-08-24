Creado el 24/08/2018 por Gabriel Missael Barco

Esta semana realizamos un total de 8 programas, los cuales analizaremos a continuación.

El primer programa, llamado "1temperatura.c" es un programa que sirve para converitir una temperatura dada en grados celsius a otros sistemas de medicion, especificamente a kelvin y farenheit. La variables usadas son de tipo float ya que el usuario puede proporcionaar la temperatura con decimales, y aunque no fuera asi, sería necesario para las conversiones. Basicamente se le solicita una temperatura al usuario y se convierten con las siguientes operacioens: 
	
	f = (c*1.8)+32;
	k = c + 273.15;

Finalmente, se imprimen los resultados y la comprobación de los mismos (volviendo a tranformar a grados celsius).

El segundo programa se titula "2operaciones.c", en el cual aprendimos algunas funciones incluidas en la libreria math.h, como las funciones trigonometricas. Despues de incluir las librerias y declarar las varibles correspondientes, se le solicita al usuario que introduzca el valor de la variable a operar. Posteriormente se realizaron tres operaciones: exp(x), cos(x)+2*tan(x/2), y  ln(x) + 3x², las cuales se presentan asi en el codigo: 
	
	y1 = exp(x);
	y2 = cos(grado(x)) + 2*(tan(grado(x/2.0)));
	y3 = log(x) + 3*(x*x);
	
Como podemos observar, dentro de las funciones trigonometricas, hay una función llamada "grado(x)", esto es debido a que la comnputadora trabaja en radianes, y para evitar estar escribiendo la conversion de grados a radianes cada vez que se ocupara, mejor se incluyó una funcion en el programa, la cual basicamente dado un numero 'a', regresa el valor de ese numero expresado en radianes:
	
	double grado(double a){
		return (a*3.141592653589)/180;	
	}
	
La función es de tipo double para que nos devuelva un valor de tipo punto flotante.

El tercer programa se llama "3coordenadas.c", el cual convierte coordenadas cartesianas a esfericas. Para tal fin, despues de declaras las variables para las coordenadas cartesianas (x,y,z) y para las esfericas (r, a ,l), se le solicita al usuario que proporcione (x,y,z), las cuales pueden ser enteras o con decimales. Posteriormente se realizan las operaciones pertinentes: 
	
	r = sqrt((x*x)+(y*y)+(z*z));
	a = atan(sqrt(x*x+y*y))/z);
	l = atan (y/x);
	
De esta manera obtenemos los valores de (x,y,z) en su equivalente en coordenadas esfericas (r,a,l) y se imprimen para que el usuario pueda conocerlas. Ademas, con fines de comprobación, se vuelven a convertir estas coordenadas esfericas obtenidas a coordenadas cartesians, con las siguientes operaciones equivalentes:
	
	X = r*sin(a)*cos(l);
	Y = r*sin(a)*sin(l);
	Z = r*cos(a);
	
De esta manera se podia estar seguro de no tener un error.

Estos ultimos tres programas fueron los que se elavoraron en la primera clase de esta semana, en la segunda clase elaboramos un total de 5 programas: 4 ejemplos de funciones vistas en clase y uno que juntaba la funcion switch con algunos programas elavorados anteriormente. El primer ejemplo, llamado "4ejemplo_uno.c" es una demostración muy sencilla de los comandos:
	
	if(condicion){
		proceso1	
	}
	else{
		proceso2	
	}
	
Basicamente, se le solicita al usuario un numero entero, y posteriormente se imprimia en pantalla si dicho numero era par o impar. Para tal fin, se uso la condicion if(N%2==0), que usa la operación modulo (%), la cual te da el resto de dividir a entre b (en este caso el numero proporcionado por el usuario entre 2), si el producto modulo de dividir entre dos era 0, entonces se tenia un numero par, de lo contrario, era un numero impar.




