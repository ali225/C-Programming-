#include <stdio.h>

void main()
{
int x = 5;
double y = 10.3;
void* p;
p = &x;
*(int*)p = 8;
printf("x = %d\r\n", x);
p = &y;
*(double*)p = 3.3;
printf("y = %lf\r\n", y);
}