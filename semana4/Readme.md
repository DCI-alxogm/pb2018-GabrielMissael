Creado el 31/08/2018

Esta semana solamente elaboramos un programa, que se titula, en este caso, "1while_conversiones.c", ademas de 3 programas ejemplos de while y el uso de las strings.

Consiste en la mejora de un programa preexistente, titulado "8conversiones.c", que fue realizado en la semana 3.
Recordando, este programa proporcionada al usuario varias opciones: 

1) Convertir grados Celsius a Fahrenheit y a kelvin 
2) convertir coordenadas cartesianas a esféricas 
3) convertir coordenadas cartesianas a polares

Al iniciar el programa, se le preguntaba al usuario que operación quería realizar, y posteriormente, se ejecutaba un subprograma que hacia lo deseado. Este proceso solo se hacia una vez, es decir, después de realizar la operación solicitada, se cerraba el programa.
Lo que se hizo esta vez, fue modificar el programa para que el usuario pudiera realizar tantas operaciones como deseara. 
Esto se logró usando la opción while (), que tiene la siguiente estructura:

     while(condición){
         Proceso
       }

Esto permite realizar un proceso mientras una condición sea verdadera. En este caso, se le preguntaba al usuario si quería realizar otra operación, su respuesta se almacenaba en una cadena de caracteres, si la primera letra era "s", entonces el proceso se repetía de nuevo.
Antes de entrar al ciclo, se ejecutó una vez la función original del programa, después se hizo la pregunta, y en caso de que el usuario respondiera afirmativamente, se entraba al ciclo while, y se sale de este hasta que el usuario responda que no.

Además, convertimos el proceso que realizaba las operaciones en una función de tipo void(), por simplicidad y para que las personas que vean el código lo entiendan con más facilidad


