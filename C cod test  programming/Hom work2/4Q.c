#include <stdio.h>

int main()
{
	float num;
	printf("Enter a number: ");
	scanf("%f",&num);
	
	if(num<=0)
	{
		if(num==0)
			printf("you entered zero.");
		else
			printf("%2.f is negative.",num);
	}
	else
		printf("%.2f is positive.",num);
	
	return 0;	
}