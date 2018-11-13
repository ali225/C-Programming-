#include <stdio.h>
#include <math.h>

float calcm(float x, float y)//Function
{
	float m;
	m = 5 * (x+y)*(x+y) + 3*x + 2*y + 2;
	return m;
}
void main()
{
	float z;
	
	z = (calcm(3,2) +
	sqrt(pow(calcm(6,1.5), 3.2f) +
							calcm(5,3.4)))/calcm(13,1.2);
	printf("z = %f\r\n", z);
} 