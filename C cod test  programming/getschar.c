#include <stdio.h>
#include <conio.h>

void main()
{
	char text[100];
	printf("Enter your first name\r\n");
	gets(text);
	printf("Your Name is %s\r\n", text);
}