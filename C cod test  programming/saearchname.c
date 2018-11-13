#include <stdio.h>
#include <string.h>

int main()
{
	
int i=0,t=0;

char name_user[10];
char name[5][10]={"Ahmed","ALi","Gamal","Aziz"};


	do
	{
		printf("Enter your name");
		scanf("%s",name_user);
		for(i=0;i<5;i++)
		{
		if(strcmp(name_user,name[i])==0)
			t=1;
	}	
	
	}while(t==0);
}