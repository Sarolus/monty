#include "monty.h"

/**
 * 
 * 
 */
void push(stack_t **stack)
{
	stack_t *new;

	new = NULL;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		errorHandler(ALLOCATION_FAILED);

	new->n = data->value;

	if (*stack == NULL)
	{
		new->next = *stack;
		new->prev = NULL;
		*stack = new;
		return;
	}

	new->next = *stack;
	new->prev = NULL;
	(*stack)->prev = new;
	*stack = new;
}
