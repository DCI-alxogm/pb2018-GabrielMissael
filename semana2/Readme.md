Por: Gabriel Missael Barco, creado el 15/08/2018

A continuación, analizaremos el programa titulado print_limites.c, así como su respectiva salida.

Lo primero que debemos notar en el programa, es que este imprime muchos valores, la cuales corresponden a los límites de cada tipo de variable, ya sea int, unsigned int, short int, float, double, long double, etc. Cabe señalar que estos valores están contenidos en la librería "limits.h"

    printf("UINT_MAX = %u \n", UINT_MAX);       
    printf("ShrtINT_MAX = %i \n", SHRT_MAX);
    printf("ShrtINT_MIN = %i \n", SHRT_MIN);
    printf("INT_MAX = %i \n", INT_MAX);
    printf("INT_MIN = %i \n", INT_MIN);
    printf("FLT_MIN      = %e\n", FLT_MIN);
    printf("FLT_MAX      = %e\n", FLT_MAX);
    printf("DBL_MIN      = %e\n", DBL_MIN);
    printf("DBL_MAX      = %e\n", DBL_MAX);
    printf("LDBL_MIN      = %Le\n",LDBL_MIN);
    printf("LDBL_MAX      = %Le\n",LDBL_MAX);

Esta primera parte del programa trata sobre la cantidad mayor y menor representable en cada una de las variables. Por ejemplo, para una variable tipo "int" se tiene un límite de +-2147483647 (mostrado en la salida del programa). Algo que me parece interesante es la variable Unisgned Int, la cual tiene el doble de capacidad (en el conjunto de números positivos) que el máximo de un int, esto es debido a que una variable de tipo int tiene la misma capacidad en positivos y negativos, y al restringir el uso de la variable a solo números positivos (unisgned int) se duplica la capacidad.

    printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON  = %e\n", DBL_EPSILON);
    printf("LBL_EPSILON  = %Le\n", LDBL_EPSILON);

    printf("FLT_DIG      = %d\n", FLT_DIG);
    printf("DBL_DIG      = %d\n", DBL_DIG);
    printf("LBDL_DIG      = %d\n", LDBL_DIG);

Esta parte del código imprime el ultimo digito (después del punto) que se toma en cuenta, esto hablando para variables de tipo float, double o long double, y esta expresado en notación científica en la terminación "EPSILON"; y con la terminación "DIG" se imprime el número de dígitos que se tomaran en cuenta después del punto.

    printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);
    printf("LDBL_MANT_DIG = %d\n", LDBL_MANT_DIG);

En esta última sección de impresiones se obtiene el numero máximo de dígitos que se pueden representar en la "Mantis", es decir, aquellos que se encuentran antes del punto decimal (del lado izquierdo) de una variable tipo float, double o long double.
Es útil conocer los limite que tienen las variables, ya que con eso te familiarizas más con el uso que pueden llegar a tener dentro de un programa.

El siguiente programa que analizaremos es el titulado "programa_1.c". Es un programa muy sencillo, el cual solicita el nombre y la edad del usuario. La edad se almacena en una variable tipo entero (int), y el nombre se almacena en un arreglo de caracteres (char[]) de 30 espacios, suficientes para cualquier nombre. Una vez que los datos son ingresados, el programa le dice al usuario (por su nombre) cuál es su edad actual, posteriormente se realiza una pequeña operación con la cual se le suman 10 unidades a la variable que contiene la edad ingresada. Por último, se le dice al usuario cuál será su edad en 10 años. Se anexa el cuerpo del programa:

    	printf("Holaaaaa, estimado usuario :)  \n");
	printf("Este es el primer programa interactivo del curso. Introduce tu edad: ");
	scanf("%i", &edad);
	printf("\n Introduce tu nombre: ");
	scanf("%s",&nombre);
	printf("\n %s, tú edad es: %i \n", nombre, edad);
	aux = edad+10;
	printf("\n Tú edad en diez años, es decir, en el 2028,  será: %i \n", aux);

Por último, tenemos dos programas muy similares, el "programa_2.c" y el "programa_3.c", los cuales efectúan las mismas operaciones con 4 variables proporcionadas por el usuario, con la diferencia de que el programa_2 usa variables de tipo entero y el programa_3 usa variables de tipo punto flotante (con números naturales). Al probar ambos programas, nos percatamos de que las primeras 3 operaciones nos proporcionan los mismos resultados, ya que, a pesar de no ser completamente iguales en estructura, sus resultados son iguales debido a la jerarquía de operaciones. La única operación que no es igual es la última. 
Una diferencia notable entre los dos programas es que, evidentemente, el programa_2 solo trabajará con números enteros, y aunque el resultado final pudiera tener cifras después del punto decimal (por la división) estas son sencillamente ignoradas. Cabe mencionar que el programa_3 puede operar con números con o sin punto decimal, más sin embargo el programa_2 opera únicamente con números enteros.
Hablando de sintaxis, lo único que cambia entre ambos programas son dos cosas: la primera, al momento de declarar las variables (ya sea int o float) y la segunda al momento de leerlas o escribirlas (ya que se pondrá %i para los enteros y %f para los naturales). Con estos dos programas aprendimos las diferencias entre las variables enteras y las de tipo flotante

