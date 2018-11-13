#include <stdio.h>

int g; //Gloabal Variables at Static Memory
int TestFunction(int x, int y)
//Input parameters and return value at Stack Memory
{
static int c = 0; //Static Variables at Static Memory
int z; //Local Variables at Stack Memory
z = x + y + c + g;
c++;
return z;
}
void main()
{
int a = 5, b = 6, c;//Local Variables at Stack Memory
g = 10;
c = TestFunction(a, b);
printf("c = %d\r\n", c);
}