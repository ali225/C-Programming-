/*
*
*
* this program using pointer call by refrens 
*
*/
#include <stdio.h>

int callbyvalue(int *n);

int main(){
	int number = 5;
	
	printf("The original value of number is %d \n ", number);

	callbyvalue(&number);

    printf("The new value of number is %d", number);

	return 0;
}

int callbyvalue(int *n)
{
	*n = *n * *n * *n;
}