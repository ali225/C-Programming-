#include <stdio.h>

void myprint()
{
	static int x = 0;
	int y = 0;
	x++;
	y++;
	printf("x = %d, y = %d\r\n", x, y);
}
void main()
{
	int i;
	for(i=0;i<10;i++)
	myprint();
}