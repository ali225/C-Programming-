#include <stdio.h>
#include <string.h>

void main()
{
	char a[20] = "Alaa Ezzat";
	char b[20];
	strcpy(b, a);
	printf("%s\r\n", b);
}