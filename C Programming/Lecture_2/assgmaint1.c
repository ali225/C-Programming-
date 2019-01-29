#include <stdio.h>


void main(void)
{
	int num,i,k=0;
	
	 /*Ask The user Enter number 10*/
	printf("pleas Enter number 10:\n"); 
	
	for(i=1;i<11;i++){
		printf("Enter numer %d:",i);
		scanf("%d",&num);
	}
	
	printf("Enter the value To search :");
	scanf("%d",&num);
	if (num == i){
		printf("Value is Exist at element number : %d",i);
	}else{ 
		printf("erro not vaule number \n");
	}
}