#include<stdio.h>


int main()
{
	float feet;
	
	printf("Please write down the distance in feet : ");
	scanf("%f",&feet);
	printf("\n Distance in meters = %f ",feet * 0.3048);
	
	return 0;

}