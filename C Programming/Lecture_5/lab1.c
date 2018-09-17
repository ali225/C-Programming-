#include <stdio.h>


void main (void)
{
	int array[10];
	int i;
	int sum=0;
	
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	
	for(i=0;i<10;i++)
	{
		sum += array[i];
	}
	printf("Sum of array elements = %d",sum);
}