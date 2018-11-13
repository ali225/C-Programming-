#include <stdio.h>
void main()
{
int x = 5, y = 9;
int* pX = &x; //Pointer
int** ppX = &pX; //Pointer to Pointer
printf("x = %d, y = %d\r\n", x, y);
**ppX = 7;
printf("x = %d, y = %d\r\n", x, y);
*ppX = &y;
*pX = 11;
printf("x = %d, y = %d\r\n", x, y);
}