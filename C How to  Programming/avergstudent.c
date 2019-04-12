#include <stdio.h>


int main()
{
	// the counter number 
   int counter = 1;
   // the total number of the all student 
   int total=0;
   // the grad of student 
   int grad; 
   // the averg number of student 
   int averg;
   
   
   // that loop counter 10 
   while(counter <= 10)
   {
	  printf("Entert the grad number %d = ", counter);
	  scanf("%d",&grad);
	  total = total + grad;
	  counter = counter +1;
   }
  /// the averg number total student   
   averg = total / 10;
  // the print number all averg student 
  printf("the averg number student : %d ", averg);
  return 0;

}