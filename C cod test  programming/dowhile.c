#include <stdio.h>
#include <conio.h>

void main()
{
	float x, y;
	do
	{
	printf("\r\nEnter x value:");
	scanf("%f", &x);
	y = 5*x*x + 3*x + 2;
	printf("\r\ny(%f) = %f", x, y);
	printf("\r\ndo you want to evaluateagain (y/n):");
}
	while(getche()=='y');
}