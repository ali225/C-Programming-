#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numb1 , numb2 ,swab_value;
	
	printf("Enter number one :");
	scanf("%f",&numb1);
	
	printf("\nEnter number two :");
	scanf("%f",&numb2);
	
	swab_value = numb1;
	numb1 =numb2;
	
	numb2= swab_value;
	
	printf("After swapping value of a= %.2f",numb1);
	
	printf("\nAfter swapping value of b= %.2f",numb2);
	
	return 0;
	
}	