#include <stdio.h>

int main()
{  int count = 1; //initialize count 
	
	while (count <= 10)
	{
		printf( "%s\n", count % 2 ? "****" : "++++++++" );

		count++;
		
	}
	return 0;
}