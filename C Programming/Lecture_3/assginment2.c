#include<stdio.h>

void main(void)
{
	int ID,pass;
	
	while(1){ 
		printf("please Enter your ID:");
		scanf("%d",&ID);
		
		if (ID != 123 && ID != 5678 && ID != 9870 )
				printf("You are not registered\n");
				//break;
		else if
				printf("please Enter Password :");
				scanf("%d",&pass);
		
		else if
				(pass != 7788 && pass != 5566 && pass != 1122)
				printf("Try again:");
		
		
		else if (ID == 123 && pass == 7788)
			printf("Welcome Ahmed");
		else if (ID == 5678 && pass == 5566)
			printf("Welcome Amr");
		else if (ID == 9870 && pass == 1122)
			printf("Welcome Wale");
	}
}