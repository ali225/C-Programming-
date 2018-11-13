#include <stdio.h>

char gName[50];

void welcome()
{
	printf("welcome %s\r\n",gName);
}
void Goodby()
{
	printf("Goodby %s\r\n",gName);
}

void main()
{
		puts("Enter your name :");
		gets(gName);
		welcome();
		Goodby();
}