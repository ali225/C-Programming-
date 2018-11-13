#include <stdio.h>

#define Exchange(value1, value2, temp) \
temp = value1;\
value1 = value2;\
value2 = temp;
void main()
{
int A = 10, B = 44, C;
float X = 10.1, Y = 12.2, Z;
printf("A = %d, B = %d, X = %f, Y = %f\n", A, B, X, Y);
Exchange(A, B, C);
Exchange(X, Y, Z);
printf("A = %d, B = %d, X = %f, Y = %f\n", A, B, X, Y);
}