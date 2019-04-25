#include <stdio.h>

void staticArrayInit(void); // function prototype 
void automaticArrayInit(void); // function prototype 

/*function main   */
int main()
{
	printf("First call to each function : \n");
	staticArrayInit();
	automaticArrayInit();
	
	
	printf("\n\nSecond call to each function : \n ");
	staticArrayInit();
	automaticArrayInit();
	
	return 0;

} /*End main */


void staticArrayInit(void){
	
	static int array[3];
	int i;
	
	printf( "\nValues on entering staticArrayInit:\n" );
	
	for(i = 0; i <= 2; i++)
	{
		printf("array[%d] = %d  ",i,array[i]);
	}
	printf( "\nValues on exiting staticArrayInit:\n" );

	for(i = 0; i <= 2; i++){
		printf("array[%d]= %d ", i , array[i] += 5);
	}
	
}


void automaticArrayInit(void){
	
	int array2[3] = {1,2,3};
	int i;
	
	printf( "\n\nValues on entering automaticArrayInit:\n" );
	
	for (i = 0; i <= 2; i++)
	{
		printf(" array2[%d]=%d ", i , array2[i]);
	} //end for  
	
	printf( "\nValues on exiting automaticArrayInit:\n" );
	
	for (i = 0;i <= 2;i++)
	{
		printf( "array2[ %d ] = %d ", i, array2[ i ] += 5 );
	}
}