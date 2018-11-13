#include <stdio.h>

int factorial(int x)
{
	int f = 1;
	for(;x>0;x--)
	f*=x;	
		
	/* while(x>!0){
	x--;
	f*=x;} */
	return f;
}
void main()
{
printf("Factorial(%d) = %d\r\n", 10, factorial(10));
printf("Factorial(%d) = %d\r\n", 0, factorial(0));
printf("Factorial(%d) = %d\r\n", 5, factorial(5));
}