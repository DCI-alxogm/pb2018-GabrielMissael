Creado por Gabriel Missael Barco el 14/09/2018

Esta semana realizamos un total de 8 programas: 5 ejemplos y 3 ejercicios, los cuales explicaremos en orden de elaboracion.

Los primeros tres ejemplos realizamos fueron para conocer como funcionan los arreglos. Estos son, basicamente,
un conjunto de N variables nombradas var[i], cuando i pertenece al rango de (0, N-1). El ejemplo 1,
titulaado "1ejemplo1_2_3.c" Realiza tres actividades con un arreglo "numero[N]". La primera,
es inicializar todas las partes del arreglo en 0.0, recorriendolo con un for e igualando cada elemento:

    for(int i=0 ; i<N ; i++){
		  numero[i]=0.0;
	  }
   
La segunda actividad era pedir N numero al usuario y guardarlos en el arreglo:

	   for(int i=0 ; i<N ; i++){
	     	scanf("%f", &numero[i]);
	   }
     
Y la terccera, imprimir de 5 en 5 los valores del arreglo:

    for (int i=0 ; i<N ; i++){
		  printf("%f ", numero[i]);
		  if((i+1)%5==0){
		    	printf("\n");		
		  }
	  }	
    
Con este ejericicio aprendimos a inicializar, modificar e imprimir un arreglo. El segundo ejemplo llamado "2ejemplo_4.c""
realiza basicamente las mismas actividades que el ejemplo anterior, con la diferencia que en lugar de imprimir cada valor,
se imprime el doble de este, con:  

  numero[i]*=2;
  
El tercer ejemplo llamado "3ejemplo_5.c",  es muy parecido al anterior, con la diferencia que el programa anterior
solo podia trabajar con 10 numeros. Este codigo le permite al usuario elegir su N, 
ademas de que se imprimen de 10 en 10.

El cuarto codigo es un ejercicio muy interesante. Es titulado "4ejercicio_1_alumnos.c", es un codigo que, al tu
proporcionarle 4 datos (eddad, sexo, semestre, promedio) de N alumnos, te da un resumen de los datos
proporcionados. Todos los datos son guardados en arreglos independientes, ademas de que hay contadores 
para cada dato. Por ejemplo, en arreglo de semestre, en cada casilla se guuarda el semestre del alumno i,
pero ademas hay un arreglo de contadores para el numero de alumnos por semestre; asi, tambien hay uno para
calificaciones y edad por semestre. De esta manera se pueden entregar datos promedio de los alumnos, 
lo cual resultaria util en bases de datos grandes.

El quinto codigo "5ejemplo_escritura_6.c" es un ejemplo de como escribir en un archivo a partir de un codigo.
Esto es util cuando, por ejemplo, quieres guardar los resultados de un programa para usarlo despues.
Los comando importantes son:

    FILE *archivo //sirve para crear una variable que hace referencia a un archivo
     archivo = fopen("resultado.txt", "w"); //se le da valor a la variable, ademas de que se crea el archivo
    fprintf(archivo, "hola"); //para escribir
     fclose(archivo); //para cerrarlo
    
El sexto codigo "6ejemplo_lectura.c" es parecido al anterior, pero para leer a partir de un archivo existente:
   
    int var;
    FILE *archivo //sirve para crear una variable que hace referencia a un archivo
     archivo = fopen("resultado.txt", "r"); //se le da valor a la variable, ademas de que se crea el archivo
    fscanf(archivo, "%i", &var); //para escribir
     fclose(archivo); //para cerrarlo
    
El septimo codigo es el mismo que el codigo cuarto, es titulado "7ejercicio_2_alumnos_lectura.c". Realiza 
la misma actividad de proporcionar un resumen a partir de una base de datos, pero en lugar de leer los datos
escritos en la consola, los lee del archibo preexistente "alumnos.txt", e imprime el resumen en un archivo
titulado "resumen.txt". Esto se logró usando lo aprendido en los dos ejemplos anteriores.

El octavo y ultimo codigo, titulado "8ejercicio_3_funciones_escritura.c", realiza lo mismo que el codigo 
"4ejercicio_math.c", de la semana 5. Recordando lo que hace este codigo:

"Calcula las siguientes funciones: log, exp, sin, cos y raíz cuadrada. Esto, para un número x que pertenece a un intervalo, cada cierto espaciado "n", todos estos datos proporcionados por el usuario. Primero se pide el inicio, el fin y el espaciado. Después, con un ciclo for se va desde i=1 hasta i=(fin-ini) /n, cada iteración suma i++ y se evalúa x=ini+i*n. Finalmente se imprime los resultados de todas las funciones para esta x, y así para cada una de las x."
    
La diferencia ahora es, que en lugar de imprimir en pantalla los resultados, crea un archivo titulado 
"funcion.txt" e imprime los resultados en dicho archivo.
    
Esto fue lo trabajado esta semana, remarcando el aprendizaje de arreglos y la lectura y escritura de archivos.
