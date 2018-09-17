#include <stdio.h>

void main(void)
{
	
	
	int houers;
	int salary;
	
	/*Ask uesr to houers work */
	printf("Pleas enter houers work ");
	scanf("%d",&houers);
	
	salary = 50 * houers;
	
	if (houers < 40 )
	{
		/**/
		salary = (salary * 90)/100;
	}
	
	printf("Your Salary is %d",salary);
}