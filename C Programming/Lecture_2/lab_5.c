#include <stdio.h>

void main(void)
{
	int ID;
	
	/* Ask the user to enter his ID */
	printf("Plese Enter Your ID: ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Welcome Ali"); break;
		case 5678: printf("Welcome Gamal"); break;
		case 1145: printf("Welcome Aziz"); break;
		default  :printf("wrong ID");
	}
	
}

