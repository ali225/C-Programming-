#include <stdio.h>
#include <stdlib.h>

void reverse();

int main()
{
   printf("Enter your string\n");
   reverse();
   printf("\n");
    return 0;
}

void reverse()
{
	char ch;
	scanf("%c",&ch);
	if(ch!='\n')
	{
		reverse();
		printf("%c",ch);

	}
}