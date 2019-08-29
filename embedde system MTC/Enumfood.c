#include <stdio.h>


enum food
{
	pizza,
	burgar,
	fish,
	pasta,
	soup
}listFood;

int  main()
{


	printf("Enter chooes food pleas :pizza = 0 ,burgar= 1 ,fish = 2 ,pasta = 3 ,soup = 4  ");
	scanf("%d",&listFood);
	
	switch(listFood){
	 case 1: printf("the main food Paizza  %d",listFood); break;
	 case 2: printf("the main food burgar  %d",listFood); break;
	 case 3: printf("the main food fish  %d",listFood); break;
	 case 4: printf("the main food pasta  %d",listFood); break;
	 case 5: printf("the main food soup  %d",listFood); break;
	 default: printf("woring chooes "); 
	          
	}
}