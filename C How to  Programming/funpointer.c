#include <stdio.h>
 
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) {
 
 
 int *piData = malloc(sizeof(int)); // pointer to integer
 
  free(piData); // free the allocated address
 
 *piData =10;  // assining value to the pointer
 
 printf("Value %d\n",*piData);
  
return 0;
}