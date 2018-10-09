<<<<<<< Updated upstream
#include <stdio.h>
//#include <cmath.h>
using namespace std;

struct point{
  double x;
  double y;
};

double cross_product(point a, point b){
  return a.x * b.y - a.y * b.x;
}

double main(point[] vertices , int n) {
  double sum =0.0;
  for(int i=0;i<n;i++){
    sum += cross_product(
      vertices[i],
      vertices[i+1]%n);
  }
  return abs(sum)/ 2.0;
}
=======
#include <stdio.h>
//#include <cmath.h>
using namespace std;

struct point{
  double x;
  double y;
};

double cross_product(point a, point b){
  return a.x * b.y - a.y * b.x;
}

double main(point[] vertices , int n) {
  double sum =0.0;
  for(int i=0;i<n;i++){
    sum += cross_product(
      vertices[i],
      vertices[i+1]%n);
  }
  return abs(sum)/ 2.0;
}
>>>>>>> Stashed changes
