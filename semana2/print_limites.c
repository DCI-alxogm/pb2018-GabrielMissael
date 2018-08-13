#include <stdio.h>
#include <float.h> 
#include <limits.h>


int main( )
{
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
    printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON  = %e\n", DBL_EPSILON);
    printf("LBL_EPSILON  = %Le\n", LDBL_EPSILON);

    printf("FLT_DIG      = %d\n", FLT_DIG);
    printf("DBL_DIG      = %d\n", DBL_DIG);
    printf("LBDL_DIG      = %d\n", LDBL_DIG);
    printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);
    printf("LDBL_MANT_DIG = %d\n", LDBL_MANT_DIG);

    
}
