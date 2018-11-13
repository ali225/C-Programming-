#include <stdio.h>
#include <conio.h> //for getche
#define PI 3.14159

int main()
{
	char choice;
	float radius;
	float area, circumference;
	
	printf("pleas Enter circle radius :");
	scanf("%f",&radius);
	
	printf("Enter your choice (a to print the area c to print the circumference ) : ");
	
	choice = getche();
	if(choice=='a')
	{
	area = PI * radius * radius;
	printf("\r\narea is %f\r\n", area);
	}
	else if(choice=='c')
	{
	circumference = 2 * PI * radius;
	printf("\r\ncircumference is %f\r\n",
	circumference);
	}
	else
	printf("\r\nwrong choice\r\n");
	
}