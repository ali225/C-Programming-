/*
 * sw_stack.c
 *
 *  Created on: Sep 24, 2018
 *      Author: My Ali Gamal Aziz  
 */

#include <stdio.h>
#include <stdlib.h>
#include "sw_stack.h"

/*display program instructions to user*/
void instructions(void){

	printf("Enter choice: \n "
			"1 to push a value on the stack \n"
			"2 to pop a value off the stack \n"
			"3 to end program");
}

/*insert a node at the stack top */
void push(Ptr_stack_Node *topPtr, int info) {

	Ptr_stack_Node newPter; /* pointer to new node*/

	newPter = malloc(sizeof(Ptr_stack_Node));

	/* insert the node at stack top*/
	if (newPter != NULL) {
		newPter->data = info;
		newPter->nextPtr = *topPtr;
		*topPtr = newPter;
	}/*end if*/
	else {
		printf("%d not inserted . No memory available .\n", info);
	} /*end else*/
}/* end function push*/
/*Remove a node from the stack top*/
int pop(Ptr_stack_Node *topPtr) {

	Ptr_stack_Node tempPtr; /*temporary node pointer */
	int popValue; /*node value*/

	tempPtr = *topPtr;
	popValue = (*topPtr)->data;
	*topPtr = (*topPtr)->nextPtr;
	free(tempPtr);
	return popValue;
}/*end function pop*/
/*print the stack */
void printStack(Ptr_stack_Node currentPtr) {
	/* if stack is empty*/
	if (currentPtr == NULL) {
		printf("the satck is empty .\n\n");
	}/*end if */
	else {
		printf("the stack is : \n");
		/*while not the os the stack*/
		while (currentPtr != NULL) {
			printf(" %d --> ", currentPtr->data);
			currentPtr = currentPtr->nextPtr;
		}/*end while */
		printf("NULL\n\n");
	}/*end else*/
}/*end the function printList*/
/* Return 1 if the stack is empty , 0 otherwise*/
int isEmpty(Ptr_stack_Node topPtr) {
	return topPtr == NULL;

}/*end function isEmpty*/
