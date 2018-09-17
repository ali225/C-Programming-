#include <stdio.h>

/*prototype of function Get_Max */ 
int Get_Max(int x,int y,int z,int f);

/*prototype of function Get_Minimum*/
int Get_Minimum(int x,int y,int z,int f);

void main(void)
{
	int a , b ,c , d, Max,Minim;
	
	printf("Pleas Enter value 1 :");
	scanf("%d",&a);
	
	printf("Pleas Enter Value 2 :");
	scanf("%d",&b);
	
	printf("Pleas Enter value 3 :");
	scanf("%d",&c);
	
	printf("Pleas Enter Value 4 :");
	scanf("%d",&d);
	
	Max = Get_Max(a,b,c,d);
	printf("the Maxumin value is : %d\n",Max);
	
	Minim = Get_Minimum(a,b,c,d);
	printf("the Minimun value is : %d\n",Minim);
	
}
int Get_Minimum(int x,int y,int z,int f)
{
	int var;
	
	if(x <=y && x <= z && x <= f)
	{
		var = x;
	}
	else if(y <= x && y <= z && y <= f)
	{
		var = y;
	}
	else if(z <= x && z <= y && z <= f)
	{
		var = z;
	}
	else if(f <= x && f <= y && f <= z)
	{
		var = f;
	}
	else
	{
	return var;
	}
}
int Get_Max(int x,int y,int z,int f)
{
	int var;
	
	if(x >= y && x >= z && x >= f)
	{
		var = x;
	}
	else if(y >= x && y >= z && y >= f)
	{
		var = y;
	}
	else if(z >= x && z >= y && z >= f)
	{
		var = z;
	}
	else if(f >= x && f >= y && f >= z)
	{
		var = f;
	}
	else
	{
	return var;
	}
}