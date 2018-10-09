<<<<<<< Updated upstream
#include <stdio.h>

void selectionsort(int A[],int n);


int main() {
  int A[6] = {2,7,4,1,5,3};
  selectionsort(A,6);
  for (int i = 0; i < 6; i++) {
    printf("%d",i );
  }

}

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
=======
#include <stdio.h>

void selectionsort(int A[],int n);


int main() {
  int A[6] = {2,7,4,1,5,3};
  selectionsort(A,6);
  for (int i = 0; i < 6; i++) {
    printf("%d",i );
  }

}

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
>>>>>>> Stashed changes
