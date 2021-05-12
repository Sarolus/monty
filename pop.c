#include "monty.h"

/**
 * 
 * 
 */
void pop(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		errorHandler(POP_EMPTY);
	
	*stack = tmp->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;
}
