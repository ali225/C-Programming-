#include <stdio.h>

void main(void)
{
	int ID;
	
	/*Ask the uesr to enter  */
	printf("pleas enter ID :");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234: printf("Welcom Ali");break;
		case 5678: printf("Welcom Gamal");break;
		case 1122: printf("Welcom Aziz");break;
		case 2211: printf("Welcom hussen");break;
		default :printf("error password !");
		
	}
}