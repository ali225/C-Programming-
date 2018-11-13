#include <stdio.h>
#include <string.h>

int powr(int x, int y);

int powr(int x, int y)
{
	if(y>0)
	{
		return(x*powr(x,y-1));
	}
	else
		return 1;
}
int main()
{
	printf("%d",powr(2,3));
	
}