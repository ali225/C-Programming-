#include <stdio.h>


int main(int argt,char**argv){
	
	int x[5] = {1,2,3,4,5};
	int* p =x;

	printf("%d \r\n",*p);
	p++;
	printf("%d \r\n",*p);
	p = x + 3;
	printf("%d \r\n",*p);
	p--;
	printf("%d \r\n",*p);

	return 0;
}