#include<stdio.h>

//Without Return Type & With Parameters

void Add(int x, int y)
{
	int result = x+y;
	printf("Result = %d",result);
}

main()
{
	Add(3,5);
}

/*
main()
{
	int a=3;
	int b=5
	Add(a,b);
}
*/

/*
main()
{
	int a;
	int b;
	printf("Please Enter a: ");
	scanf("%d",&a);
	printf("Please Enter b: ");
	scanf("%d",&b);
	Add(a,b);
}
*/

