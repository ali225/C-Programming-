#include <stdio.h>

size_t getSize( ); /* prototype */

int main(void)
{
	float array[20]; /* create array */

	printf( "The number of bytes in the array is %d"
	"\nThe number of bytes returned by getSize is %d\n",sizeof( array ), getSize( array ) );

	return 0;
}

size_t getSize(float *ptr)
{
	return sizeof (ptr);
} // end function getSize 