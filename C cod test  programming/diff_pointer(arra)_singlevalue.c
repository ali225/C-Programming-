#include <stdio.h>

void tryToModify(int x, char text[])
{
	x++;
	text[0]--;
}
void main()
{
	int v = 5;
	char name[5] = "Good";
	printf("v = %d, name = %s\r\n", v, name,sizeof(name));
	tryToModify(v, name);
	printf("v = %d, name = %s\r\n", v, name,sizeof(name));
	
}