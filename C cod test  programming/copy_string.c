#include "stdio.h"

void main()
{
	char a[20] = "Alaa Ezzat";
	char b[20];
	int i = 0;

	while(a[i]!=0)
	{
		b[i] = a[i];
		i++;
	}
	b[i] = 0; //Add null termination to the end of B
	
	printf("%s\r\n", b);
}