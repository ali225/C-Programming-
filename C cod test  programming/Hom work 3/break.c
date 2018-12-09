/*c program to demonstrate the working of break statement by terminating a loop, if user inputs negative number  */
#include <stdio.h>

int main()
{
	float num,average,sum;
	int i,n;
	printf("Maximum no. of inputs \n");
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		printf("Enter n%d :",i);
		scanf("%f",&num);
		if(num<0.0)
		break;
		
		sum=sum+num;
	}
	average = sum/(i-1);
	printf("Average=%.2f",average);
	return 0;
}