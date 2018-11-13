#include "stdio.h"
#include "math.h"
void main()
{
	float x;
	x = 1.7;
	printf("float(x) = %f\r\n", x);
	x = (int)(1.3);
	printf("int(x) = %f\r\n", x);
	x = ceil(1.3);
	printf("ceil(x) = %f\r\n", x);
	x = floor(1.3);
	printf("floor(x) = %f\r\n", x);
}