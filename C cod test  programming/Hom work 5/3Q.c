#include <stdio.h>


typedef struct complex{
	float Real,imaginary;
}complex;

void complexadd(complex first ,complex second);

void main(){

	struct complex first,second;
	
	printf("For 1st complex number: \n");
	printf("Enter Real and imaginary respectively: ");
	scanf(" %f %f",&first.Real,&first.imaginary);
	printf("\nFor 2nd complex number: \n");
	printf("Enter Real and imaginary respectively: ");
	scanf(" %f %f",&second.Real,&second.imaginary);
	complexadd(first,second);
	
	
}
 void complexadd ( complex first , complex second){
	 
	struct complex sum;
	sum.Real = first.Real + second.Real;
	sum.imaginary = first.imaginary + second.imaginary;
	printf("\nsum = %g+%gi\n\n",sum.Real,sum.imaginary);
	 
 }