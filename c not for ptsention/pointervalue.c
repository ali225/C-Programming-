#include <stdio.h>

void Get(int* c, double* d)
{
	*c = 72;
	*d = 175.0;
}
int main(void)
{
	int a = 0;
	double b = 0.0;
	
	Get(&a , &b);
	printf("a : %d, b : %f\n", a, b);
	
	return 0;
}