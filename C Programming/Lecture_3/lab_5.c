#include <stdio.h>


void main (void)
{
	int i,num;
	
	printf("Enter the number to disable its multiplication table : ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++){
		printf("%d X %d = %d\n",num,i,i*num);
	}
	
	
}