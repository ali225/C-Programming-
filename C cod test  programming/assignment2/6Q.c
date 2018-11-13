#include <stdio.h>

void main()
{
	int x = 11;
	int y = 23;
	int z = -42;
	
		printf("x = %d (%08X)\r\n", x, x);
		printf("y = %d (%08X)\r\n", y, y);
		printf("z = %d (%08X)\r\n", z, z);
		printf("x or y = %d (%08X)\r\n", x|y, x|y);
		printf("x and y = %d (%08X)\r\n", x&y, x&y);
		printf("x xor y = %d (%08X)\r\n", x^y, x^y);
		printf("not z = %d (%08X)\r\n", ~z, ~z);
}