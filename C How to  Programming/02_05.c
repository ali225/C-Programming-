#include <stdio.h>


int main()
{
   int a;  // first number to input 
   int b;  // second number to input 
   int sum; // sum all stor 
   
   printf ("Enter the two number pleas : ");
   scanf("%d %d ", &a,&b);
   
   sum = a + b; 
   
   printf("the sum number : %d",sum);
   
   return 0;
}