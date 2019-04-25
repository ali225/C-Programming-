#include <stdio.h>
#include <stdlib.h>
 
 
int main(int argc, char *argv[]) {
 
 int aiData[5] = {10,5,6,7,8}; //integer array
 
 printf("Address of first element %p\n\n",&aiData[0]);
 
 printf("Address of first element %p\n\n",aiData);
 
 return 0;
}