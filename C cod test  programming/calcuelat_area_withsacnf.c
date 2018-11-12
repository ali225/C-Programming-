#include<stdio.h>

int main()
{
	// define variable intager  
	int width;
	// define variable intager 
	int height;
	// define variable intager 
	int area;
	
	// please enter number width 
	printf("please  Enter the Rectangle width : ");
	scanf("%d",&width);
	//please enter number height 
	printf("please Enter the Rectangle height : ");
	scanf("%d",&height);
	
	
	// calculat the value of mathematical
	area = width * height;
	
	// the result of area rectangle 
	printf("Rectangle area equals %d",area);
	
	return 0;

}