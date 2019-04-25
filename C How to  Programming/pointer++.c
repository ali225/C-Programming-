#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *pcData = NULL; // pointer to character 
	float *pfData = NULL; // pointer to float 

		printf(" Address of character pointer before incrementation = %d\n\n\n", pcData);
    
		printf(" Address of float pointer before incrementation = %d\n\n\n", pfData);
	
	pcData++;
	pfData++;
	
	  printf(" Address of character pointer before incrementation = %d\n\n\n", pcData);
    
	  printf(" Address of float pointer before incrementation = %d\n\n\n", pfData);
	
	return 0;
}