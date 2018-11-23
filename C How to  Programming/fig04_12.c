/* Fig. 4.11: fig04_12.c
Using the break statement in a for statement */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
	int x; /* counter */

	/* loop 10 times */
	for ( x = 1; x <= 10; x++ ) {

	/* if x is 5, terminate loop */
	if ( x == 5 ) {
		continue;	/* break loop only if x is 5 */
	} /* end if */

	printf( "%d ", x ); /* display value of x */
	}	 /* end for */

	printf( "\nUsed continue to skip printing the value 5\n" );
	return 0; /* indicate program ended successfully */
 } /* end function main */