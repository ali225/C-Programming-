#include <stdio.h>

void Sort(int values[], int nValues)
{
	int i,j,temp;
	
	for(i=0;i<nValues-1;i++)
		for(j=i;j<nValues;j++)
			if(values[i]>values[j])
			{
				temp = values[i];
				values[i] = values[j];
				values[j]=temp;
			}
}
void main()
{
	int i, values[5] = {89,73,28,94,32};
	Sort(values, 5);
	for(i=0;i<5;i++)
		printf("%d\r\n", values[i]);
}