#include "stdio.h"
void main()
{
	float a[3][3];
	int r, c;
	float determinant;
	for(r=0; r<3; r++)
	{
	for(c=0; c<3; c++)
	{
	printf("Enter the item(%d, %d) : ", r, c);
	scanf("%f", &a[r][c]);
	}
	}
	determinant =
	a[0][0] * (a[1][1] * a[2][2] - a[2][1] * a[1][2]) -
	a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) +
	a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
	printf("matrix determinant is %f\r\n", determinant);
}