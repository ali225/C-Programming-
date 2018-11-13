#include <stdio.h>

struct status_type{
	unsigned char :4;
	unsigned char cts:1;
	unsigned char dsr:1;
	
}status;


int main(int argt,char**argv){
	status.cts = 1;
	printf("sizeof structure = %d ", sizeof(status));
	return 0;
}