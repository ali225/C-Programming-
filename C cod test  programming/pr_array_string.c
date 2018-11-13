#include <stdio.h>

void main()
{
	char names[5][14] = {"Ahmed Alaa", "Ahmed Osama", "AhmedMamdouh", "Ahmed Samy", "Ahmed Hossain"};
	int i;

	for(i=0; i<5; i++)
		printf("%s\r\n", names[i]);
}