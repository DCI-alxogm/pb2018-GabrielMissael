Por: Gabriel Missael Barco, creado el 15/08/2018
A continuación analizaremos el programa titulado print_limites.c, asi como su respectiva salida.

Lo primero que debemos notar en el programa, es que este imprime muchas variables, la cuales corresponden a los limites de cada tipo de variable, ya sea int, unsigned int, short int, float, double, long double, etc. Cabe señalar que estas variables estan contenidas en la libreria "limits.h"

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

Esta primera parte del programa trata sobre la cantidad mayor y menor representable en cada una de las variables. Por ejemplo, para una variable tipo "int" se tiene un limite de +-2147483647 (mostrado en la salida del programa).

    printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON  = %e\n", DBL_EPSILON);
    printf("LBL_EPSILON  = %Le\n", LDBL_EPSILON);

    printf("FLT_DIG      = %d\n", FLT_DIG);
    printf("DBL_DIG      = %d\n", DBL_DIG);
    printf("LBDL_DIG      = %d\n", LDBL_DIG);

Esta parte del codigo imprime el ultimo dijito (despues del punto) que se toma en cuenta, esto hablando para variables y esta expresado en notación cientifica 

    printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);
    printf("LDBL_MANT_DIG = %d\n", LDBL_MANT_DIG);

En esta ultima sección de impresiones, se obtien el numero maximo de digitos que se puede representar en la "Mantis", es decir, aquellos que se encuentran antes del punto decimal (del lado izquierdo) de una variable tipo float, double, etc.

