#include <stdio.h>

struct SDate
{
	int m_Day;
	int m_Month;
	int m_Year;
};

struct SStudent
{
	char m_Name[256];
	char m_Description[8192];
	struct SDate m_BirthDate;
	double m_Degrees[10];
	double m_TotalDagrees;
};

struct SStudent SlowUpdateTotalDegree(struct SStudent student)
{
	student.m_TotalDagrees = 0;
	int i = 0;
	for(i=0;i<10;i++)
		student.m_TotalDagrees += student.m_Degrees[i];
	
	return student;
}

void FastUpdateTotalDegree(struct SStudent* pStudent)
{
	pStudent->m_TotalDagrees =0;
	int i = 0;
	for(i=0;i<10;i++)
		pStudent->m_TotalDagrees += pStudent->m_Degrees[i];
	
}

void main()
{
	struct SStudent s = {"Ali Gamal ", "Ahmed Gamal ",{22,12,1990},{88,98,88,92,98,87,66,94,87,99}};
	
	// Method 1:without Pointers
	s = SlowUpdateTotalDegree(s);
	printf("Total degress of %s is %2.21f (%2.21f%%)\r\n",s.m_Name,s.m_TotalDagrees,(double)(100.0 * s.m_TotalDagrees/1000.0));
	
	//Method 2: with pointers 
	FastUpdateTotalDegree(&s);
	printf("Total degress of %s is %2.21f% (%2.21f%%)\r\n",s.m_Name,s.m_TotalDagrees,(double)(100.0 * s.m_TotalDagrees/1000.0));
}