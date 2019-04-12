#include<stdio.h>

// that programing calculat the sum 0 - 10 
int main()
{
      int sum = 0 , x = 1; // initialize sum and x 
	  
	  // loop condtion for programing 
	  while(x <= 10)
	  {
	     sum +=x;
		  ++x;
	  }
	  printf("the sum number %d ", sum);
	  
	  return 0;
}