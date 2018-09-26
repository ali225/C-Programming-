/*
 ============================================================================
 Name        : Selection.c
 Author      : ALi Gamal Aziz 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include " selection_sort_algorithm.h"

int main(void) {

  int A[6] = {2,7,4,1,5,3};
  selectionsort(A,6);
  for (int i = 0; i < 6; i++) {
    printf("%d",i );
  }

	puts("\n!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
