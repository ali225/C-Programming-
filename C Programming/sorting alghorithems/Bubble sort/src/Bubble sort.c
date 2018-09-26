/*
 ============================================================================
 Name        : Bubble.c
 Author      : ALi Gamal Aziz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "Bubble_sort.h"


int  main()
{
	int array[10];
	//int size = 10;
	int i;

	/* Scan the values loop */
	for (i=0;i<10;i++)
	{
		printf("Please Enter number %d:",i);
		scanf ("%d",&array[i]);
	}

	/* Print the values after sorting */
	printf("Values after sorting are:\n");
	for (i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
}

