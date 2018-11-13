#include <stdio.h>

void main()
{
	float x, y;
	x = 5;

	y = 5 * x * x + 3 * x + 2;
	printf("y(%f) = %f\r\n", x, y);
	x = 16;
	y = 5 * x * x + 3 * x + 2;
	printf("y(%f) = %f\r\n", x, y);
	x = 22;
	y = 5 * x * x + 3 * x + 2;
	printf("y(%f) = %f\r\n", x, y);
	x = 3.5;
	y = 5 * x * x + 3 * x + 2;
	printf("y(%f) = %f\r\n", x, y);
	x = 15;
	y = 5 * x * x + 3 * x + 2;
	printf("y(%f) = %f\r\n", x, y);
}