#include <stdio.h>

void main()
{
	int nStudents = 0;
	float degree, sum = 0;
	printf("Enter negative value to exit:\r\n");
	
	while(1)
	{
	printf("Enter student (%d) degree:",
	nStudents + 1);
	scanf("%f", &degree);
	if(degree<0)break; //force exit from while loop
	sum += degree;
	nStudents++;
	}
	printf("Average students degree is : %f\r\n",sum/nStudents);
}