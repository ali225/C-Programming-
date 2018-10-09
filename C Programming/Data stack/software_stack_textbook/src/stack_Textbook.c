/*
 ============================================================================
 Name        : stack_Textbook.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "sw_stack.h"


/*function main begins program execution */
int main(void) {
	Ptr_stack_Node stackPtr = NULL; /*points to stack top */
	int choice; /* user menu choice */
	int value; /* int input by user */

	instructions(); /*display the menu */
	printf("?");
	scanf("%d", &choice);

	/*while user does not enter 3 */
	while (choice != 3) {

		switch (choice) {
		/*push value onto stack */
		case 1:
			printf("Enter an integer: ");
			scanf("%d", &value);
			printStack(stackPtr);
			break;
			/*pop value off stack*/
		case 2:
			/*if stack is not empty */
			if (!isEmpty(stackPtr)) {
				printf("the popped value is %d .\n", pop(&stackPtr));
			}/*end if */
			printStack(stackPtr);
			break;
		default:
			printf("Invalid choice .\n\n");
			instructions();
			break;
		}/*end switch*/
		printf("?");
		scanf("%d", &choice);
	}/*end while*/

	printf("End of run.\n");
	return 0; /*indicates successful termination*/
}/*end main*/
