//    A C program to take two integers, check to confirm the second is not zero, 
//    divide the first by the second, and display the result to three decimal places, 
//    with documentation.

//    Do the standard initial C bits
#include <stdio.h>

int main (void)
{

//    Declare floating variables:
    float
//    exe, for one floating number
    exe,
//    wye for the second floating number.
    wye,
//    zee for the floating point result
    zee ;

//    Ask for two integers.
    printf ("Enter two numbers.\n\n") ;

//    Get floating numbers exe and wye.
    scanf ("%f \n\n %f", &exe, &wye);

//    If wye is equal to zero, 
    if ( wye == 0 )
//    state that wye is zero.
         printf ( "%1.0f is zero and will not divide.\n\n", wye ) ;

//    Else, zee tobe exe diviced by wye
    else
        {
        zee = exe / wye ;

//    and display to three decimal places.
        printf ("%1.0f divides into %1.0f %.3f times.\n\n", wye, exe, zee ) ;
        }

//    There is nothing to return
    return 0;
}
