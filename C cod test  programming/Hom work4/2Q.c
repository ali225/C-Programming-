#include <stdio.h>

int factorial(int x);

int  main(){
	int no;
	printf("Enter an positive integer: ");
	scanf(" %d",&no);
	printf("factorial of %d= %1d\n",no,factorial(no));
	
	return 0;
}
int factorial(int x){
	
	if(x!=1)
		return x*factorial(x-1);
	
}