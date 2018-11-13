#include <stdio.h>

struct status_type{
	unsigned char x:1;
	unsigned char y:1;
	unsigned char z:1;
	unsigned char s:1;
	unsigned char a:1;
}status;


int main(int argt,char**argv){
	status.x = 1;
	printf("sizeof structure = %d ", sizeof(status));
	return 0;
}