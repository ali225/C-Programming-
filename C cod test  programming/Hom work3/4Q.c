#include<stdio.h>

int main()
{
	int arr[30],element,num,i,location;
	
	printf("\nEnter no of element :");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEntert the element to be inserte :");
	scanf("%d",&element);
	
	printf("\n Enter the location");
	scanf("%d",&location);
	
	// creat space at the spacified location
	for(i=num;i>=location;i--){
		arr[i]=arr[i-1];
	}
	num++;
	arr[location - 1] = element;
	
	// print out the result of insertion
	for(i=0;i<num;i++)
		printf("n %d",arr[i]);
	
	return(0);
}