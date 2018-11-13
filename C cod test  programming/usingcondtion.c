#include "stdio.h"
#include "math.h"
void main()
{
		int a = 9;
		int b = 8;
		int c = 12;
		printf("%d\r\n", a>b); //prints 1
		printf("%d\r\n", b>c); //prints 0
		printf("%d\r\n", a<=9); //prints 1
		printf("%d\r\n", a!=9); //prints 0
		printf("%d\r\n", (a-b)>(c-b)); //prints 0
		printf("%d\r\n", a>b && c>b); //prints 1
		printf("%d\r\n", a>b && c<b); //prints 0
		printf("%d\r\n", a>b || c<b); //prints 1
		printf("%d\r\n", !(a<b)); //prints 1
		printf("%d\r\n", 3 && 0); //prints 0
		printf("%d\r\n", -15 || 0); //prints 1
		printf("%d\r\n", !(-15)); //prints 0
	
}	