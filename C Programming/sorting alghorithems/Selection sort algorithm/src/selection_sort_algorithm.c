/*
 *  selection_sort_algorithm.c
 *
 *  Created on: Sep 26, 2018
 *      Author: My ALi Gamal Aziz 
 */
#include " selection_sort_algorithm.h"

void selectionsort(int A[] , int n)
{
      for (int i= 0; i < n-1; i++){
        int imin = i;
        for (int j = i+1;j<n;j ++)
        {
          if(A[j] < A[imin])
                  imin = j;
        }
        int temp = A[i];
        A[i] = A[imin];
        A[imin] = temp;
      }
}
