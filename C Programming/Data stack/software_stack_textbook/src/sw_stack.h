/*
 * sw_stack.h
 *
 *  Created on: Sep 24, 2018
 *      Author: My Ali Gamal Aziz  
 */

#ifndef SW_STACK_H_
#define SW_STACK_H_


/*referential structure */
typedef struct stackNode {
	int data; /*define data as an int */
	struct stackNode *nextPtr; /*stackNode pointer */

}stack_Node;
/*end structure stackNode */

typedef stack_Node *Ptr_stack_Node; /*synonym for stackNode */

/*prototypes */

void push(Ptr_stack_Node *topPtr, int info);
int pop(Ptr_stack_Node *topPtr);
int isEmpty(Ptr_stack_Node topPtr);
void printStack(Ptr_stack_Node currentPtr);
void instructions(void);





#endif /* SW_STACK_H_ */
