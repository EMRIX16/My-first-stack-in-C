#include<stdio.h>
#include"stack_ds.h"

stack_ds_t stack1;

return_status_t ret = R_NOK;
uint32_t stack_top_val = ZERO;
uint32_t stack_pop_val = ZERO;
uint32_t stack_size_val= ZERO;

int main()
{			
	ret= stack_init(&stack1);
	if(R_NOK == ret)
	{
		printf("Stack failed to be initialized\n");
	}
	else{
		printf("Stack was successfully initialized!\n");
	}
	
	printf("**************************\n");

	/** PUSHING DATA **/
	ret= stack_push(&stack1, 10);
	ret= stack_push(&stack1, 20);
	ret= stack_push(&stack1, 30);
	ret= stack_push(&stack1, 40);
	ret= stack_push(&stack1, 50);
	ret= stack_push(&stack1, 60); //failed
	
	printf("#######################\n");
	/**STACK SIZE **/
	ret= stack_size(&stack1, &stack_size_val);
	printf("The stack size is %i\n", stack_size_val);
	/**STACK DISPLAY**/
	ret= stack_dis(&stack1);
	/**STACK TOP VALUE**/
	ret= stack_top(&stack1);
	
	printf("**************************\n");
	/**POPING data**/
	ret = stack_pop(&stack1,&stack_pop_val);
	ret = stack_pop(&stack1,&stack_pop_val);
	ret = stack_pop(&stack1,&stack_pop_val);
	
	printf("#######################\n");
	/**STACK SIZE **/
	ret= stack_size(&stack1, &stack_size_val);
	printf("The stack size is %i\n", stack_size_val);
	/**STACK DISPLAY**/
	ret= stack_dis(&stack1);
	/**STACK TOP VALUE**/
	ret= stack_top(&stack1);
	
}