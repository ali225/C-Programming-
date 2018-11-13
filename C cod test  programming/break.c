#include <stdio.h>


void main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if(i == 5)
		{
		printf(" \n coming out of for loop when i =");
		break;
		}
		printf("%d",i);
	}

}