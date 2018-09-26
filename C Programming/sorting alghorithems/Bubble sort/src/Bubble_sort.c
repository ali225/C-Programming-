/*
 * Bubble_sort.c
 *
 *  Created on: Sep 26, 2018
 *      Author: My ALi Gamal Aziz 
 */


#include <stdio.h>
#include "Bubble_sort.h"



int array[10];
int size = 10;
int i, j, z;

int Bubble_sorting( )
{
	/* Sort the values using Bubble sorting */
	for (i=0; i<size-1;i++)
	{
		 for (j = 0; j < size-i-1; j++)
		{
			if(array[j] > array[j+1])
			{
				z = array[j+1];
				array[j+1] = array[j];
				array[j] = z;
			}
		}
	}


}
