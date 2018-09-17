#include <stdio.h>

void main (void)
{
	int num1, num2,result;
	
	while(1){
		printf("please enter first number ");
		scanf("%d",&num1);
		printf("please enter second number ");
		scanf("%d",&num2);
		result = num1 + num2;
		printf("the result is %d \n \n",result);
	}
}