#include <stdio.h>

/* function main begins program execution */
int main(void)
{
	int x,y,z, result;
	
	printf("Enter three integers ");/* prompt */
	scanf("%d%d%d",&x,&y,&z);	/* read an integer */
	
	result = x * y * z;  /* multiply values */
	
	printf( "The product is %d\n", result ); /* display result */
	
	return 0;/* indicate that program ended successfully */
}/* end function main */