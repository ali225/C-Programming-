#include <stdio.h>

void main()
{
	int i;
	float degree, sum;
	
	for(i=1,sum=0 ; i<=10;i++)
	{
		printf("Enter student (%d) degree : ",i);
		scanf("%f",&degree);
		sum += degree;
	}
	printf("Average students degree is : %f\r\n", sum/10);
}