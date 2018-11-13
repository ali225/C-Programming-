#include <stdio.h>


int main(int argt,char**argv){
	
	int x = 6;
	int* px;
	px = &x;
	printf("%d %d\r\n",&x,px);
	printf("%d %d\r\n",x,*px);

	return 0;
}