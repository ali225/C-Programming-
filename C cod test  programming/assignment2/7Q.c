#include <stdio.h>

void main()
{
	int x = 15;
	int y = 2;
	int z;
	float r;
	
	z = x/y;
	printf("x/y = %d\r\n",z);
	
	r = x/y;
	printf("x/y = %f\r\n",r);
	
	r = x/(float)y;
	printf("x/y = %f \r\n",r);
	
	r= x/(y*1.0);
	printf("x/y = %f \r\n",r);
}