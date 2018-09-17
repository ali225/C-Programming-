#include <stdio.h>

void main(void)
{
	int num;
	
	/* Get the number to check from the user */
	printf("Pleas enter number : ");
	scanf("%d",&num);
	
	if ((num % 2) == 0)
		printf("number is Even");
	else 
		printf("number is odd");
}