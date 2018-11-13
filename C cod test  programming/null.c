#include <stdio.h>
void main()
{
int* pX = NULL;
if(pX!=NULL)
printf("pX point to %d", *pX);
else
printf("pX is not initialized");
}