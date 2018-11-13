#include <stdio.h>

struct SComplex
{
	double m_R; //Real Part
	double m_I; //Imaginary Part
};
struct SComplex ReadComplex(char name[])
{
	struct SComplex C;
	printf("Enter %s Complex Value (Ex: 5, -3):", name);
	scanf("%lf, %lf", &C.m_R, &C.m_I);
	return C;
}

struct SComplex AddComplex(struct SComplex A, struct SComplexB)	
{
	struct SComplex C;
	C.m_R = A.m_R + B.m_R;
	C.m_I = A.m_I + B.m_I;	
	return C;
}
void PrintComplex(char name[], struct SComplex C)
{
	printf("%s = (%lf) + j (%lf)\r\n", name, C.m_R, C.m_I);
}

void main()
{
		struct SComplex X, Y, Z;
		
		X = ReadComplex("X");
		Y = ReadComplex("Y");
		Z = AddComplex(X, Y);
		PrintComplex("Z", Z);
}