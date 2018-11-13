#include <stdio.h>

void main()
{
	int a,b,minimum;
	printf("Enter tow numbers : ");
	scanf("%d%d",&a,&b);
	minimum = (a<b)?a:b;
	printf("The minimum is %d\r\n", minimum);

}