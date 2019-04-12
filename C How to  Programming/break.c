#include <stdio.h>

int main()
{
	int x; // counter 
	
	for(x=0;x <=10;x++)
	{
		if(x == 5)
		{
			//break;
			continue;
		}
		printf("%d ",x);
		
	}
	printf("\n the number %d",x);
	
	return 0;
}
