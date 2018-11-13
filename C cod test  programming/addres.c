#include <stdio.h>
void main()
{
int x = 5, y = 9, z;
printf("x at location 0x%x contains %d\r\n", &x, x);
printf("y at location 0x%x contains %d\r\n", &y, y);
z = x + y;
printf("z at location 0x%x contains %d\r\n", &z, z);
}