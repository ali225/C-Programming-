#include <stdio.h>

void main(void)
{
	
	int number;
	
	/* Start factorail with 1 */
    int factorial = 1;
	
	/* Get the value from the user */
	printf("Enter an integer: ");
	scanf("%d",&number);
	
	do{
		factorial *= number;
		number--;
	}while(number > 0);
	    printf("Factorial= %d", factorial);

}