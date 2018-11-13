#include <stdio.h>

void main()
{
	char Text[] = "Welcome to computer world";
	char* pText = Text;
	do
	{
	printf("%s\r\n", pText);
	pText++;
	}
	while((*pText));
}