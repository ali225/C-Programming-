#include<stdio.h>

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

void PrintEmploee(struct SEmployee* pEmploee)
{
		printf("%s, %d/%d/%d, %d/%d/%d, %d\r\n",
		pEmploee->m_Name,
		pEmploee->m_GraduationDate.m_Day,
		pEmploee->m_GraduationDate.m_Month,
		pEmploee->m_GraduationDate.m_Year,
		pEmploee->m_BirthDate.m_Day,
		pEmploee->m_BirthDate.m_Month,
		pEmploee->m_BirthDate.m_Year,
		pEmploee->m_Salary);
}
void main()
{
	struct SEmployee X = {"Ahmed Said", {22, 12, 1990},{2, 7, 1970}, 5000};
	PrintEmploee(&X);
}