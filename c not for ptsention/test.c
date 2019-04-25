#include<stdio.h>

int main()
{
 struct MyStruct {
	 int x; 
	 int y; 
	 
 }myobject;

 //struct MyStruct myobject;
 
  struct MyStruct *p = &myobject;
 
 p->x = 42;
 p->y = 123; 
 printf(".x = %i , .y = %i \n", p->x, p->y);
 printf(".x = %i , .y = %i \n ", myobject.x, myobject.y);
 
 return 0; 
}
 
