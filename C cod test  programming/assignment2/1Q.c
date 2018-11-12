#include <stdio.h>


int main()
{
	float weight;
		
	printf("Enter your weight in pounds ");
	scanf("%d",&weight);
	printf("your weight in Kilograms is %d ", weight * 0.45359237);
}