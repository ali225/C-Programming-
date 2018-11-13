#include <stdio.h>
#include <stdlib.h>
int main()
{
	float numb1,numb2;

	printf("enter calue of a: ");
	scanf("%f",&numb1);  // 4 
	printf("enter calue of b: ");
	scanf("%f",&numb2);   // 6 
	// 4+6 = 10 
	numb1=numb1+numb2;
	// 10-6 = 4
	numb2=numb1-numb2;
	// 10 - 4 = 6
	numb1=numb1-numb2;
	
	printf("After swapping value of a= %.2f",numb1);
	printf("\nAfter swapping value of b= %.2f",numb2);

return 0;

}