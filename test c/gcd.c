#include "stdio.h"
int a = 124;
int b = 400;
int main(int a, int b){
  int dividend = a;
  int divisor = b;
  while (divisor != 0) {
    int remaider = dividend % divisor;
    dividend = divisor;
    divisor = remaider;
  }
  printf("%d\n",dividend );
  return dividend;
}
