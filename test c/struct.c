<<<<<<< Updated upstream
/* dynamic stack program*/
#include <stdio.h>
#include <stdlib.h>

/*self- referential structure  */
typedef struct stackNode {
  int data; // define data as an int
  struct stackNode *nextptr; // stackNode pointer
}StackNode; // end structure stackNode

typedef StackNode *StackNodePtr; //

/*prototypes */
void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

/*function main begins progeram execution*/

int main(void) {

   StackNodePtr stackPtr = NULL; /* points to stack top */
   int choice; /* user's menu choice */
   int value; /* int input by user */

   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );

   /* while user does not enter 3 */
   while ( choice != 3 ) {

     switch ( choice ) {
   /* push value onto stack */
        case 1:
          printf( "Enter an integer: " );
          scanf( "%d", &value );

          printStack( stackPtr );
          break;
          /* pop value off stack */
          case 2:
            /* if stack is not empty */
            if ( !isEmpty( stackPtr ) ) {

              printf("The popped value is %d.\n",pop(&stackPtr));
             } /* end if */

             printStack( stackPtr );
             break;
             default:
             printf("Invalid choice.\n\n" );
             instructions();
             break;
             } /* end switch */

             printf("? ");
             scanf( "%d", &choice );
             } /* end while */

             printf("End of run.\n");
             return 0; /* indicates successful termination */

  } /* end main */

/* display program instructions to user */
 void instructions( void )
 {
 printf( "Enter choice:\n"
 "1 to push a value on the stack\n"
 "2 to pop a value off the stack\n"
 "3 to end program\n" );
 } /* end function instructions */

 /*Insert a node at the stack top  */
 void push(StackNodePtr *topPtr,int info)
 {
   StackNodePtr newPtr; // pointer to new node

      newPtr = malloc(sizeof(StackNode));
   /*Indsert the node at satck top */
   if(newPtr != NULL){
     newPtr ->data = info;
     newPtr ->nextPtr = *topPtr;
     *topPtr = newPtr;
   }/*end if */
   else
   {
     printf("%d mot Insert No memory available \n",info );

   }/*end else*/
 }/*end function push */

  /*Remove a node form the stack top */
 int pop (StackNode *topPtr)
 {
   StackNodePtr tempPtr /*tempporary node poniter*/
   int popValue; /* node value*/

   tempPtr = topPtr;
   popValue = (*topPtr)->data;
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);
   return popValue;
 }/* end function pop*/

   /*print the satck */
 void printStack(StackNodePtr currentPtr)
 {
   /*if stack is empty */
   if (currentPtr == NULL){
     printf("The stack is empty \n\n", );
   }/*end if */
   else
   {
     printf("the satck is :\n", );
     /*while not the end of the stack */
     while (currentPtr != NULL) {
       printf("%d --> \n",currentPtr->data);
       currentPtr = currentPtr-> nextPtr;
     }/*end while */
     printf("NULL\n\n", );
   } /*end else*/
 } /* end function printlist*/

 int isEmpty(StackNodePtr topPtr)
 {
   return topPtr == NULL;
 }/*end function isEmpty*/
=======
/* dynamic stack program*/
#include <stdio.h>
#include <stdlib.h>

/*self- referential structure  */
typedef struct stackNode {
  int data; // define data as an int
  struct stackNode *nextptr; // stackNode pointer
}StackNode; // end structure stackNode

typedef StackNode *StackNodePtr; //

/*prototypes */
void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

/*function main begins progeram execution*/

int main(void) {

   StackNodePtr stackPtr = NULL; /* points to stack top */
   int choice; /* user's menu choice */
   int value; /* int input by user */

   instructions(); /* display the menu */
   printf( "? " );
   scanf( "%d", &choice );

   /* while user does not enter 3 */
   while ( choice != 3 ) {

     switch ( choice ) {
   /* push value onto stack */
        case 1:
          printf( "Enter an integer: " );
          scanf( "%d", &value );

          printStack( stackPtr );
          break;
          /* pop value off stack */
          case 2:
            /* if stack is not empty */
            if ( !isEmpty( stackPtr ) ) {

              printf("The popped value is %d.\n",pop(&stackPtr));
             } /* end if */

             printStack( stackPtr );
             break;
             default:
             printf("Invalid choice.\n\n" );
             instructions();
             break;
             } /* end switch */

             printf("? ");
             scanf( "%d", &choice );
             } /* end while */

             printf("End of run.\n");
             return 0; /* indicates successful termination */

  } /* end main */

/* display program instructions to user */
 void instructions( void )
 {
 printf( "Enter choice:\n"
 "1 to push a value on the stack\n"
 "2 to pop a value off the stack\n"
 "3 to end program\n" );
 } /* end function instructions */

 /*Insert a node at the stack top  */
 void push(StackNodePtr *topPtr,int info)
 {
   StackNodePtr newPtr; // pointer to new node

      newPtr = malloc(sizeof(StackNode));
   /*Indsert the node at satck top */
   if(newPtr != NULL){
     newPtr ->data = info;
     newPtr ->nextPtr = *topPtr;
     *topPtr = newPtr;
   }/*end if */
   else
   {
     printf("%d mot Insert No memory available \n",info );

   }/*end else*/
 }/*end function push */

  /*Remove a node form the stack top */
 int pop (StackNode *topPtr)
 {
   StackNodePtr tempPtr /*tempporary node poniter*/
   int popValue; /* node value*/

   tempPtr = topPtr;
   popValue = (*topPtr)->data;
   *topPtr = (*topPtr)->nextPtr;
   free(tempPtr);
   return popValue;
 }/* end function pop*/

   /*print the satck */
 void printStack(StackNodePtr currentPtr)
 {
   /*if stack is empty */
   if (currentPtr == NULL){
     printf("The stack is empty \n\n", );
   }/*end if */
   else
   {
     printf("the satck is :\n", );
     /*while not the end of the stack */
     while (currentPtr != NULL) {
       printf("%d --> \n",currentPtr->data);
       currentPtr = currentPtr-> nextPtr;
     }/*end while */
     printf("NULL\n\n", );
   } /*end else*/
 } /* end function printlist*/

 int isEmpty(StackNodePtr topPtr)
 {
   return topPtr == NULL;
 }/*end function isEmpty*/
>>>>>>> Stashed changes
