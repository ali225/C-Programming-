#include<stdio.h>


void main(void)
{
	/*Defin Two variable  a , b */
	int a , b ; 
	/*Ask the user the Value */
	printf("Please Enter number a :");
	/*Get the Value from the user */
	scanf("%d",&a);
	
	/*Ask the user the value */
	printf("Please Enter number b :");
	/*Get the Value from the user */
	scanf("%d",&b);
	
	printf("a + b = %d\n", a + b);		printf("a - b = %d\n", a - b);
	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);
}
