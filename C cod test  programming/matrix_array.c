#include<stdio.h>

void main()
{
	float a[3][3] = {{2, 3, 4},
					{4, 8, 9},
					{8, 5, 2}};

	float t[3][3];
	int r, c;

	for(r=0; r<3; r++)
	{
	for(c=0; c<3; c++)
	{
	t[r][c] = a[c][r];
	}
	}
	for(r=0; r<3; r++)
	{
	for(c=0; c<3; c++)
	{
	printf("%2.2f\t", t[r][c]);
	}
	printf("\r\n");
	}
}