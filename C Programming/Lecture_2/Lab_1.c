#include <stdio.h>


void main(void)
{
	int x;
	printf("pleas Enter choose 1 or 0 =");
	scanf("%d",&x);
	if(x == 0)
		printf("False Value in GCC = 0\n");
	else if(x == 1)
		printf("True value in GCC = 1\n");
	else 
		printf("Erro that choose");
}