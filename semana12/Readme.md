Creado por Gabriel Missael Barco 

Esta semana, la semana 12, aprendimos a crear nuestras propias librerias. Esto tiene la utilidad de organizar mejor nuestros codigos y tener a la mano distintas funciones creadas por nosotros.

Esto se ejemplifica con los primeros codigos. En estos, la libreria creada se llama "holamake.h", esta contiene las funciones que se usarán. Por otro lado, las funciones no son definidas en esta libreria, mas bien se definen en archivo "holafunc.c" que, de hecho, incluye a esta libreria en el propio codigo codigo. Finalmente el archivo que contiene la funcion del programa es  "hola.o". Este conjunto de archivos sirven simplemente para recibir un número e imprimir el cuadrado del mismo. Es una tarea sencilla, pero separar un codigo en distintos archivos y crear nuestras propias librerias es particularmente para proyectos grandes. Por ultimo, en este ejemplo se creó un archivo de tipo "Makefile" el cual nos permite compilar el programa de forma mas sencilla. En lugar de escribir:

     gcc -lm -Wall -o hola.o hola_main.c holafunc.c -I ./libs
  
Escribimos:

     Make
  
Y de hecho se ejecutarán los comandos que normalmente escribiriamos. Pasa algo parecido con:

      rm hola.o
   
En su lugar escribimos:
  
        Clean
        
        
Pusimos lo aprendido en practica creando una libreria y un archivo "Makefile" para el Proyecto 2, que se encuentra en la semana 11. 
Lo realizado se encuentra en la carpeta "proyecto".
