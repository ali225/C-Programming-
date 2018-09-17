#include <stdio.h>

/*prototype of function Get_Max */ 
int Get_Max(int x, int y);

void main(void)
{
	int a , b , Max;
	
	printf("Pleas Enter value 1 :");
	scanf("%d",&a);
	
	printf("Pleas Enter Value 2 :");
	scanf("%d",&b);
	
	Max = Get_Max(a,b);
	printf("the Maxumin value is : %d",Max);
	
}
int Get_Max (int x , int y) 
{
	int var;
	
	if (x > y ){
		var = x;
	}else
	{
		var = y;
	}
	
	return var;
}