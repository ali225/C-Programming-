#include <stdio.h>

void main (void)
{
	
	int num1,num2,num3;
	
	 /*Ask The user Enter number 3 */
		printf("Enter numer 1:");
		scanf("%d",&num1);
		
		printf("Enter numer 2:");
		scanf("%d",&num2);
		
		printf("Enter numer 3:");
		scanf("%d",&num3);
	
		if(num1 >= num2 && num1 >=num3) 
				printf("Maxmum number :%d",num1);	
		else if(num2 >= num1 && num2 >= num3)
				printf("Maxmum number :%d",num2);
		else
				printf("Maxmum number :%d",num3);
		
}