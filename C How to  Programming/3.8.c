/* raise x to the y power */
#include <stdio.h>

int main( void )
{
	int x, y, i, power; /* define variables */

	i = 1; /* initialize i */
	power = 1; /* initialize power */
	scanf( "%d", &x ); /* read value for x from user */
	scanf( "%d", &y ); /* read value for y from user */

	while ( i <= y ) { /* loop while i is less than or equal to y */
	power *= x; /* multiply power by x */
	++i; /* increment i */
	} /* end while */

	printf( "%d", power ); /* display power */
	return 0;
} /* end main function */