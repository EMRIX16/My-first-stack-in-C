#ifndef _STACK_DS_H
#define _STACK_DS_H

#include "std_types.h"

#define STACK_MAX_SIZE 5
#define STACK_DEBUG


		/*Making a special type, stack= array+pointer*/
typedef struct{
	uint32_t stack_pointer;
	uint32_t data[STACK_MAX_SIZE];
}stack_ds_t;

   /*enum to assign default values*/
typedef enum{
	STACK_EMPTY,
	STACK_FULL,
	STACK_NOT_FULL,
}stack_status_t;

	/*stack functions prototype*/

return_status_t stack_init	(stack_ds_t *my_stack); // initializes the stack

/**NOTE: """the EMPTY&FULL functions will only be used by other funcs and won't be used in main
		so there is no point in declaring it here"""
return_status_t stack_empty	(stack_ds_t *my_stack); // checks if the stack is EMPTY or not
return_status_t stack_full 	(stack_ds_t *my_stack); // checks if the stack is FULL or not
*/

return_status_t stack_push 	(stack_ds_t *my_stack, uint32_t value); // PUSHes data to stack

return_status_t stack_pop   (stack_ds_t *my_stack, uint32_t *value); // POPs data from the stack

return_status_t stack_size  (stack_ds_t *my_stack, uint32_t *stack_size); // gives the SIZE of the stack

return_status_t stack_dis	(stack_ds_t *my_stack); // DISPLAYS the content of the stack

return_status_t stack_top	(stack_ds_t *my_stack ); // returns the TOP of the stack


#endif // _STACK_DS_H