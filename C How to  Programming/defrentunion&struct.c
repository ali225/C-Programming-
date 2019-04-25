/*
 * main.c
 *
 *  Created on: Apr 19, 2019
 *      Author: Eng Ali Gamal
 */
#include <stdio.h>
// creat uion
typedef union job {
	char name[32];
	float salary;
	int notwork;
} u_job;

// creat struct
typedef struct Job{
	char name[32];
	float salary;
	int notwork;
}s_job;

int main() {

	printf("size of union = %d", sizeof(u_job));
	printf("size of struct = %d", sizeof(s_job));

	return 0;
}
