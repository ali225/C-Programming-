#include <stdio.h>
#define SIZE 12 

int main()
{
	// initializer array 
	int a[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i;			// counter of array 
	int total = 0;  // sum of array 
	

	for(i = 0; i < SIZE; i++)
	{
		total += a[i];
	}
	
	printf("Total of the value of array %d\n",total);
	
	return 0;
	
}