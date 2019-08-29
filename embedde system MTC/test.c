#include <stdio.h>

#include <stdio.h>

// main function
void main(void) {


	int x = 5;
	int y = 9;

	x=(--x)+(y++);
	printf(" x = %d\n",x);

	y=(x++)*(--y);
	printf("y = %d\n",y);
	x=(x++)-(y++);
	printf("y = %d\n",x);

}