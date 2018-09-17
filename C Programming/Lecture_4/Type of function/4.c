#include<stdio.h>

//With Return Type & With Parameters

int Add(int x, int y)
{
	int result = x+y;
	
	return result;
}

main()
{
	int Eslam;
	Eslam =	Add(3,5);
	printf("Result = %d",Eslam);
}

/*
main()
{
	int Eslam;
	int a=3;
	int b=5;
	Eslam =	Add(a,b);
	printf("Result = %d",Eslam);
}
*/

/*
main()
{
	int Eslam;
	int a=3;
	int b=5;
	printf("Please Enter a: ");
	scanf("%d",&a);
	printf("Please Enter b: ");
	scanf("%d",&b);
	Eslam =	Add(a,b);
	printf("Result = %d",Eslam);
}
*/