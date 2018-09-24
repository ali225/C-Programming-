/*
 ============================================================================
 Name        : Software_Stack.c
 Author      : Ali Gamal Aziz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "sw_stack.h"

gstr_stack_t my_stack;
gstr_stack_data_t my_data;

int main(void) {
	my_data.data = 20;
    create_stack(0 , 30 );
	sw_push(&my_stack,&my_data);
	sw_push(&my_stack , &my_data);
	sw_pop(&my_stack,&my_data);
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
