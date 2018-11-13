#include "stdio.h"
void main()
{
	int i;
	float values[10] = {75.5, 88.0, 89.5, 23.5, 72.0,63.5, 57.5, 62.0, 13.5, 46.5};

	float sum;

	//Calculate the sum
	for(i=0, sum=0; i<10; i++)
			sum += values [i];
	//Prints the average
	printf("Average value is %f\r\n", sum/100);
}	