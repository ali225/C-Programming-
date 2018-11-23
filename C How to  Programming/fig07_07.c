/* Fig. 7.6: fig07_07.c
Cube a variable using call-by-value */
#include <stdio.h>

int cubeByValue( int *nPtr ); /* prototype */

int main( void )
{
	int number = 5; /* initialize number */

	printf( "The original value of number is %d", number );

	/* pass number by value to cubeByValue */
	 cubeByValue( &number );

	printf( "\nThe new value of number is %d\n", number );
	return 0; /* indicates successful termination */
 } /* end main */

/* calculate and return cube of integer argument */
int cubeByValue( int *nPtr )
{
	*nPtr = *nPtr * *nPtr * *nPtr; /* cube local variable n and return result */
} /* end function cubeByValue */


