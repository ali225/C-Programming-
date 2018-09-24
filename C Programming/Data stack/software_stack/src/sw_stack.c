/*
 * sw_stack.c
 *
 *  Created on: Sep 24, 2018
 *      Author: My Ali Gamal Aziz  
 */
#include<stdio.h>
#include <stdlib.h>
#include "sw_stack.h"

typedef struct node
{
	gstr_stack_data_t data;
	struct node* next;
}str_node_t;

static bool_t ecore_memcpy(char*src , char*des,u32 size)
{
	bool_t b_ret_val = E_TRUE;

	if ((src != NULL) && (des != NULL ) && (size > 0))
	{
		while(size --)
		{
			*des = *src;
			des++;
			src++;
		}

	}
	else
	{
		b_ret_val = E_FALSE;
	}

	return b_ret_val;
}

u8 create_stack(gstr_stack_t * p_stk, u32 max_node_number)
{
	bool_t b_ret_val = E_TRUE;

	if ((p_stk != NULL ) &&(max_node_number > 0))
	{
		p_stk->max_node_count = max_node_number;
		p_stk->max_node_count = 0;
		p_stk->p_stack = NULL;
	}
	else
	{
		b_ret_val = E_FALSE;
	}
	return b_ret_val;
}


genum_stack_errors_t sw_push(gstr_stack_t * p_stk,gstr_stack_data_t * data)
{
	genum_stack_errors_t enum_ret_val = NO_ERRORS;

	if ((p_stk != NULL ) && (data != NULL))
	{
		if(p_stk->current_node_count < p_stk->max_node_count)
		{

		str_node_t * pn=(str_node_t*)malloc(sizeof(str_node_t));
		bool_t ret_memcpy = ecore_memcpy((char*)data,(char *)&pn->data,sizeof(gstr_stack_data_t));

		if (ret_memcpy == E_TRUE)
		{
			pn->next =(str_node_t*)p_stk->p_stack;
			p_stk->p_stack =(void *)pn;
			p_stk->current_node_count++;
		}
		else
		{
			enum_ret_val = INTERNAL_MEMORY_ERROR;
		}

		}
		else
		{
			enum_ret_val = STACK_FULL;
		}

	}
	else
	{
		enum_ret_val = INVLAID_ARG;
	}
	return enum_ret_val;
}



u8 sw_pop(gstr_stack_t * p_stk ,gstr_stack_data_t *p_data)
{
	genum_stack_errors_t enum_ret_val = NO_ERRORS;

	if((p_stk != NULL) && (p_data != NULL))
	{
		if(p_stk->current_node_count > 0 )
		{
			bool_t ret_memcpy = ecore_memcpy((char*)&((str_node_t*)p_stk->p_stack)->data ,(char*)p_data,sizeof(gstr_stack_data_t));
			if(ret_memcpy != E_FALSE)
			{
				str_node_t *pn = (str_node_t*)p_stk->p_stack;
				p_stk->p_stack = (void *)pn->next;
				p_stk->current_node_count--;
				free(pn);
			}
			else
			{
				enum_ret_val = INTERNAL_MEMORY_ERROR;
			}
		}
		else
		{
			enum_ret_val = STACK_EMPTY;
		}

	}
	else
	{
		enum_ret_val = INVLAID_ARG;
	}

	return enum_ret_val;
}



