#include <stdio.h>

void main(void)
{
	int i, num,sum=0;
	float avg;
	
	printf("Enter The 10 number \n");
	for (i=0;i<10;i++){
		printf("Number -%d:",i);
		scanf("%d",&num);
		sum +=num;
	}
	avg = sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is: %f\n",sum,avg);

	
}