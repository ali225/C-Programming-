/*c program to demonstrate the working of continue statement by terminating a loop, if user inputs negative number  */
#include <stdio.h>

int main()
{
	int i,num,product;
	
	for(i=1,product=1;i<=4;++i)
	{
		printf("Enter num%d:",i);
		scanf("%d",&num);
		if(num==0)
			continue;
		
		product*=num;
	}
	
		printf("product=%d",product);
	return 0;
}