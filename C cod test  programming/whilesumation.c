#include <stdio.h>


void main()
{
	int i=1, sum =0; // Initiation 
	
	while(i<=99)
	{
		sum +=i;
		i+=2;     // increment
	}
	printf("Summation of odd value between (1 and 99) is :%d ",sum);
}