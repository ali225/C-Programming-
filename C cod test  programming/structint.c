#include <stdio.h>

struct status_type{
	unsigned int x:5;
	unsigned int y:1;
	unsigned int z:1;
	unsigned int s:1;
	unsigned int a:1;
}status;


int main(int argt,char**argv){
	status.x = 1;
	printf("sizeof structure = %d ", sizeof(status));
	
	return 0;
}