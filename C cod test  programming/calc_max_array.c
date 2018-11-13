#include "stdio.h"
void main()
{
	int i,j,temp,size;
	float degrees[10] = {75.5, 88.0, 89.5, 23.5, 72.0,63.5, 57.5, 62.0, 13.5, 46.5};
/*
	float max;

	max = degrees[0];
	for(i=1; i<10; i++)
	{
		if(max<degrees[i])
		{
		max = degrees[i];
		}
	}
	printf("Maximum degree is %f\r\n", max);
*/

printf("============>>>>> Part2 descending order \n");

for (i=0;i<size-1;i++)
{
	for(j=i+1;j<size;j++)
	{
		if(degrees[j]>degrees[i])
		{
			temp = degrees[i];
			degrees[i] = degrees[j];
			degrees[j] = temp;
		}
	}
}
for(i=1;i<10;i++)
{
	printf("degrees [%d] = %f \n ",i,degrees[i]);
}
}