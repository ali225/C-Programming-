#include <stdio.h>

int main()
{
	int a[10][10],trans[10][10],r,c,i,j;
	printf("Enter rows and column of matrix:");
	scanf("%d% d",&r,&c);
	
	// storing element of matrix
	printf("\nEnter element of matrix:\n");
	for(i=0;i<r;++i)
		for(j=0;j<c;++j){
		printf("Enter a%d%d:",i+1,j+1);
		scanf("%f",&a[i][j]);	
		}
	
	// disable thr matrix 
	printf("\nEnter matrix:\n");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		printf("%d ",a[i][j]);
		if(j==c-1)
			printf("\n\n");
	}

	//finding transpose 
	for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		trans[j][i]=a[i][j];	
	}
	
	// disable the transpose 
	printf("\ntranspose of matrix:\n");
	for(i=0;i<r;++i)
	for(j=0;j<c;++j)
	{
		printf("%d  ",trans[i][j]);
		if(j==r-1)
			printf("\n\n");
	}

	return 0;
}