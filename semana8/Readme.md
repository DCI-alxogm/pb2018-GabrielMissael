Creado por Gabriel Missael Barco

Esta semana aprendimos a usar apuntadores en C. Para tal fin realizamos un total de 7 ejemplos, los cuales serán explicados a continuación.

El primer ejemplo se titula "1ejemplo_apuntador.c", y es un ejemplo muy sencillo, donde aprendemos a usasr apuntadores, con sentencias tipo:

	printf("\n La dirección de la variable var[%i] = %x", i, ptr);
	printf("\n El valor de la variable vas[%i] = %i \n", i, *ptr);

Esto dentro de un arrreglo. Para pasar al siguiente elemento del arrreglo se hace ptr++.

El segundo ejemplo "2ejemplo_malloc.c" es un ejemplo de una función para reservar memoria, llamada malloc. Esta función reserva un solo bloque de memoria y puede ser tratada como un arreglo:

	int *ptr, N=5;	
	ptr = (int*) malloc(N*sizeof(int));

Al final del codigo, para liberar la memoria ocupada por el arreglo:

	free(ptr);

El tercer ejemplo es similar al anterior, solo que esta vez con una fucnión llamada calloc:

	ptr = (int*) calloc(N, sizeof(int));

En el cuarto ejemplo "4ejemplo_realloc.c" vemos una función interseante, llamada  realloc. Esta sirve para redeclarar el tamaño de un arreglo, por ejemplo si tenemos:

	ptr= (int*) malloc(n1*sizeof(int));

Pero ahora queremos que sea de tamaño n2, entonces:

	ptr=realloc(ptr, n2);

Y ya esta.
El quinto ejemplo "5ejemplo_arreglo_to_apuntador.c", es un ejemplo de como declarando un arreglo, este puede ser tratado como un espacio de memoria reservado con apuntadores:

	int num[6], sum=0;
	
	scanf("%i", (num+i));
	sum+=*(num+i);

En el ejemplo 6 se ve lo mismo pero de manera inversa:

	int sum=0, *num;

	scanf("%i", &num[i]);
	sum += num[i];

Y eso es todo.
