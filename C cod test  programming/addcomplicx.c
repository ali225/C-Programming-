#include "stdio.h"
struct SComplex
{
	double m_R; //Real Part
	double m_I; //Imaginary Part
};
void main()
{
	struct SComplex X, Y, Z;
	printf("Enter X Complex Value (Ex: 5, -3):");
	scanf("%lf, %lf", &X.m_R, &X.m_I);
	printf("Enter Y Complex Value (Ex: 5, -3):");
	scanf("%lf, %lf", &Y.m_R, &Y.m_I);
	Z.m_R = X.m_R + Y.m_R;
	Z.m_I = X.m_I + Y.m_I;
	printf("Z = (%lf) + j (%lf)", Z.m_R, Z.m_I);
}