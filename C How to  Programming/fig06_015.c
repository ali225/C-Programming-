#include <stdio.h>
#define SZIE 10

int main(void)
{
	int a[SZIE]={2,6,4,8,10,12,89,68,45,37};
	int i; /*counter for loop */
	int pass; /*comparisons counter*/
	int hold; /*swap using */
	
	printf("Datat items in original\n ");
	
	/*data original array */
	for(i = 0;i < SZIE; i++)
	{
		printf("%4d",a[i]);
	}
	
	/*bubble sort*/
	
	for(pass = 0; pass < SZIE; pass++)
	{
		/*loop contorl number of comparisons */
		for(i = 0;i < SZIE -1; i++)
		{
			
			/*swap them number */
			if(a[i] > a[i + 1])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1]= hold;
			}
		}
	}
	
	/* scend data items  */
	printf("\nData items in ascending order\n");
	
	/*data original array */
	for(i = 0;i < SZIE; i++)
	{
		printf("%4d",a[i]);
	}
	
	printf("\n");
	
	return 0;
	
}