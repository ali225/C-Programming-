#include <stdio.h>
#include <string.h>
#include <conio.h>

struct SDate
{
		int m_Day;
		int m_Month;
		int m_Year;
};

struct SEmployee
{
		char m_Name[50];
		struct SDate m_GraduationDate;
		struct SDate m_BirthDate;
		int m_Salary;
};

void main()
{
		struct SEmployee employees[100], tempEmployee,mployees[100];
		int count = 0, i, j;
		char firstName[50], secondName[50];
		do
		{
			printf("Enter Employee First Name:");
			scanf("%s", firstName);
			
			printf("Enter Employee Second Name:");
			scanf("%s", secondName);
			strcpy(employees[count].m_Name, firstName);
			strcat(employees[count].m_Name, " ");
			strcat(employees[count].m_Name, secondName);
			printf("Enter Employee Birth Date (day/month/year)example(23/3/1970):");
			scanf("%d/%d/%d",
					&employees[count].m_BirthDate.m_Day,
					&employees[count].m_BirthDate.m_Month,
					&employees[count].m_BirthDate.m_Year);
					
			printf("Enter Employee Graduation Date(day/month/year) example(23/3/1970):");
			scanf("%d/%d/%d",
				&employees[count].m_GraduationDate.m_Day,
				&employees[count].m_GraduationDate.m_Month,
				&employees[count].m_GraduationDate.m_Year);
				
			printf("Enter Employee Salary:");
			scanf("%d", &employees[count].m_Salary);
			
			count++; if(count==100)break;
			
			printf("Do you want to add more, press 'y'to continue?\r\n");
	}
	while(getch()=='y');
	
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
	
			if(
	employees[i].m_BirthDate.m_Year>employees[i].m_BirthDate.m_Year ||
	(employees[i].m_BirthDate.m_Year==employees[j].m_BirthDate.m_Year &&
	employees[i].m_BirthDate.m_Month>employees[j].m_BirthDate.m_Month) ||
	(employees[i].m_BirthDate.m_Year==employees[j].m_BirthDate.m_Year &&
	employees[i].m_BirthDate.m_Month==employees[j].m_BirthDate.m_Month &&
	employees[i].m_BirthDate.m_Day>employees[j].m_BirthDate.m_Day))
						{
							tempEmployee = employees[i];
							mployees[i] = employees[j];
							employees[j] = tempEmployee;
						}
		}
	}
	
	for(i=0;i<count;i++)
	{
		printf("%s\t%d/%d/%d\t%d/%d/%d\t%d\r\n",
			employees[i].m_Name,
			employees[i].m_BirthDate.m_Day,
			employees[i].m_BirthDate.m_Month,
			employees[i].m_BirthDate.m_Year,
			employees[i].m_GraduationDate.m_Day,
			employees[i].m_GraduationDate.m_Month,
			employees[i].m_GraduationDate.m_Year,
			employees[i].m_Salary);
	}
}	
