Creado por Gabriel Missael Barco el 17/09/18

El primer ejercicio "1jercicio_1_integral.c" de esta semana consistio en lo siguiente:

Se otorga un intervalo que va desde "a" hasta "b", y quieres evaluar "x" cuando esta pertenece al intervalo y se preseta "N" veces a lo largo de este.

Podemos determinar el espaciado entre cada "x", con:

		delta = (b-a)/N;

Ademas, sabemos que f(x) = x^p, siendo que "p" tambien se asigna por el usuario. Por ultimo tambien resiviremos una variable "k" que nos servirá mas adelante para calcular la integral con el metodo del trapecio.
Todos estos valores son leidos del archivo "lee.txt".

Cada "x" esta dada dentro de un ciclo for, desde i=b hasta i<=b, cada i+=delta. Para cada x, para conocer f(x), simplemente realizamos pow(x, p), lo cual corresponde a la potenciacion de x a la p. Para calcular "x" sigue un metodo interesante: el metodo del trapecio. Este corresponde a una aproximación. Sabemos que una integral es el area bajo la curva en un intervalo dado. Para este caso, dicho intervalo corresponde "a" hasta "x". 

Este metodo corresponde a dividir la curva entre el intervalo en "k" rectangulos (o trapecios), calcular el area de cada uno y entonces la suma de las areas de los rectangiulos se aproximara al area bajo la curva (es decir, la integral).

Podemoos calcular la base de cada rectangulo con:
	
		h=(i-a)/k;

Ahora, para la altura, se evalua para cada rectangulo. Este valor corresponde a a+h, luego a a+2*h, a+3*h... a(k-1)*h, para esto hacemos un ciclo for desde 1 hasta w<k. Esto lo guardamos en la variable llamada "integral", lo cual será una sumatoria. Finalmente, integral+= (pow(a, p) + pow(i, p))/2, y por ultimo intergal*=h.
Este calculo se ve asi en codigo:

		h=(i-a)/k;
		integral = (pow(a, p) + pow(i, p))/2;
		for(int w=1 ; w<k ; w++){
			integral += pow((a+w*h), p);
		}
		integral*=h;

Realizaremos estas operaciones para cada x, e iremos imprimiendo todo en el archivo "resultados.txt". Asi obtenemos f(x) y el area bajo la curva desde a hasta x (la integral):
