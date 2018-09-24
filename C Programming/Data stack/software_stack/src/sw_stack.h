/*
 * sw_stack.h
 *
 *  Created on: Sep 24, 2018
 *      Author: My Ali Gamal Aziz  
 */

#ifndef SW_STACK_H_
#define SW_STACK_H_
#include "common.h"

typedef enum
{
	NO_ERRORS = 0,
	INVLAID_ARG = 5,
	STACK_FULL,
	STACK_EMPTY,
	INTERNAL_MEMORY_ERROR,
}genum_stack_errors_t;

typedef struct
{
	/*user imp  */
	u16 data;
}gstr_stack_data_t;

typedef struct
{
	void * p_stack;
	u32 max_node_count;
	u32 current_node_count;
}gstr_stack_t;

/*
 * in[P_stk] :
 * in[max_size] :
 *
 */

u8 create_stack(gstr_stack_t * p_stk, u32 max_node_number);

/*
 * in[p_stk] :
 * in[max_size] :
 *
 */
genum_stack_errors_t sw_push(gstr_stack_t * p_stk,gstr_stack_data_t * data);

/*
 * in[p_stk] :
 * out[data] :
 *
 */

u8 sw_pop(gstr_stack_t * p_stk,gstr_stack_data_t * data);

#endif /* SW_STACK_H_ */
