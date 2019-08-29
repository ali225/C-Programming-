#include <stdio.h>

typedef unsigned  int u16;

struct sizetest
{
	u16 Day:5;
	u16 Week:3;
	u16 Month:4;
};

int  main()
{
	struct sizetest s_t = {32,3,8};
	
	printf("Size of sturct is %d", s_t.Day);
}