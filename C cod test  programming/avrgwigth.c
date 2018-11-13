#include <stdio.h>


void main()
{
	int x[5];
	int sum = 0;
	int* px = x;
	int i;
	
	for(i=0;i<sizeof(x)/sizeof(int);i++)
		scanf("%d\n",px + i);
	
	for(i=0;i<sizeof(x)/sizeof(int);i++)
		printf("%d\n",*px++);
	
	px = x;
	for(i=0;i<sizeof(x)/sizeof(int);i++)
		sum += *px;

	printf("sum = %d\n",sum);
	
	
}