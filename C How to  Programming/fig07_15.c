#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array , const int size); /*prototype*/

void swap(int *elementlPtr, int *element2Ptr); /* prototype */

int main()
{
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int i; // counter 
	
	printf("Data items in original order \n ");
	
     /*printf loop of array output */
	 
	 for(i = 0 ; i < SIZE; i++)
	 {
		 printf("%4d", a[i]);
	 }
	 /*sort the array */
	 bubbleSort(a,SIZE);
	 
	 printf("\n Data items in ascending order \n");
	 
	 for(i = 0; i < SIZE;i++)
	 {
		 printf("%4d",a[i]);
	 }
	 
	 printf("\n");
	 
	 return 0;
}

void bubbleSort(int * const array, const int size)
{
	int pass; /* pass counter */ 
	int j;    /*comparison counter */

	for(pass = 0; pass < size -1;pass++)
	{
		for(j = 0; j < size -1; j++)
		{
			if(array[j] > array[j + 1]){
				swap(&array [j], &array[j + 1]);
			}
		}
	}
	
}

void swap(int *elementlPtr, int *element2Ptr){
	
	int hold = *elementlPtr;
	*elementlPtr = *element2Ptr;
	*element2Ptr = hold;
	
}