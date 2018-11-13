#include <stdio.h>

struct SPerson
{
	char m_Name[18];
	long m_ID;
	char m_Age;
	short m_Salary;
	double m_Weight;
};
void main()
{
printf("the size of person structure is %d\r\n",sizeof(struct SPerson));
}