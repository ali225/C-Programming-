#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) {
 
 int iData = 10;  //integer variable
 
 int *piData = NULL;  //pointer to integer
 
 piData = &iData; // Assign the address of the variable to the pointer
 
 printf("\n Value of the variable = %d\n\n\n", iData);
 
 
 // *piData is the data that is live at the memory address 
 //  which is stored by the piData
 printf(" print the value of variable using the pointer = %d\n\n\n", *piData);
 
 *piData = 14; // set 14 to iData
 
 printf(" Value of the variable = %d\n\n\n", iData);
 
 printf(" print the value of variable using the pointer = %d\n\n\n", *piData);
 
 return 0;
}