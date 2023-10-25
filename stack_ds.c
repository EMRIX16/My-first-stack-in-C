#include "stack_ds.h"

/**INITIALIZING the stack**/
return_status_t stack_init	(stack_ds_t *my_stack){
	return_status_t ret= R_NOK;
	if(NULL== my_stack)
	{
		ret = R_NOK;
	}
	else
	{
		my_stack->stack_pointer = -1;
		ret = R_OK;
	}
	return ret;
}

		/**checks if the stack is EMPTY or not**/
static return_status_t stack_empty(stack_ds_t *my_stack){
	
	if(-1==(my_stack->stack_pointer))
	{
		return STACK_EMPTY;
	}
	else
	{
		return STACK_NOT_FULL;
	}
	
}

		/**checks if the stack is FULL or not**/
static return_status_t stack_full(stack_ds_t *my_stack){
	
	if( (STACK_MAX_SIZE-1) == (my_stack->stack_pointer) )
	{
		return STACK_FULL;
	}
	else
	{
		return STACK_NOT_FULL;
	}
	
}  

		/**PUSHes data to stack**/
return_status_t stack_push(stack_ds_t *my_stack, uint32_t value){
	return_status_t ret = R_NOK;
	if(NULL==my_stack || STACK_FULL==stack_full(my_stack))
	{
		#ifdef STACK_DEBUG
		printf("Stack is FULL can't push (%i)\n", value);
		#endif
		ret = R_NOK;
	}
	else
	{
		my_stack->stack_pointer++;
		my_stack->data[my_stack->stack_pointer] = value; /*my_stack->data #SAME AS# (*my_stack).data*/
		#ifdef STACK_DEBUG
		printf("Value(%i) was pushed to the stack\n", value);
		#endif
		ret = R_OK;
	}
	return ret;	
}  

		/**POPs data from the stack**/
return_status_t stack_pop(stack_ds_t *my_stack, uint32_t *value){
	return_status_t ret= R_NOK;
	if((NULL==my_stack)|| STACK_EMPTY== stack_empty(my_stack) || NULL==value)
	{
		#ifdef STACK_DEBUG
		printf("The stack is EMPTY can't POP any data\n");
		#endif
		ret = R_NOK;
	}
	else
	{
		*value = my_stack->data[my_stack->stack_pointer];
		my_stack->stack_pointer--;
		#ifdef STACK_DEBUG
		printf("Value(%i) was poped from the stack\n", *value);
		#endif
		ret = R_OK;
	}
	
	return ret;	
}  

		
			/**gives the SIZE of the stack**/
return_status_t stack_size(stack_ds_t *my_stack, uint32_t *stack_size){
	return_status_t ret= R_NOK;
	if(NULL == my_stack || NULL==stack_size)
	{
		ret = R_NOK;
	}
	else
	{
		*stack_size = (my_stack->stack_pointer)+1;
		ret = R_OK;
	}
	return ret;	
}  


		/**DISPLAYS the content of the stack**/
return_status_t stack_dis(stack_ds_t *my_stack){
	return_status_t ret = R_NOK;
	sint8_t stack_counter= ZERO;
	if( NULL== my_stack || STACK_EMPTY == stack_empty(my_stack))
	{
		#ifdef STACK_DEBUG
		printf("ERROR! the stack is EMPTY can't display any data.\n");
		#endif
		ret = R_NOK;
	}
	else
	{
		printf("Stakc data:\n");
		for(stack_counter= my_stack->stack_pointer; stack_counter>=0; stack_counter--)
		{
			printf("%i \t", my_stack->data[stack_counter]);
		}
		ret = R_OK;
		printf("\n");
	}
	return ret;
}  

			/**Returns the TOP element in the stack**/
return_status_t stack_top(stack_ds_t *my_stack ){
	return_status_t ret = R_NOK;
	if(NULL==my_stack  || (STACK_EMPTY == stack_empty(my_stack)))
	{
		#ifdef STACK_DEBUG
		printf("Stack is EMPTY there is no TOP value\n");
		#endif
		ret = R_NOK;
	}
	else
	{
		uint32_t value = my_stack->data[my_stack->stack_pointer];
		#ifdef STACK_DEBUG
		printf("Stack top value is (%i)\n",value);
		#endif
		ret= R_OK;
	}
	return ret;
}
