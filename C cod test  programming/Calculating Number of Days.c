#include <stdio.h>


int main()
{
	char nDaysperweek = 7;
	long nWeeks;
	long nDays;
	
	printf("Enter the number of weeks");
	scanf("%d",&nWeeks);
	nDays = nWeeks * nDaysperweek;
	
	printf("Number of days in %d weeks is %d \r\n" , nWeeks , nDays);
	
}