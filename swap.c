#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: head of our stack.
 */
void swap(stack_t **stack)
{
	stack_t *tmp;
	stack_t *new;

	if (data->line_nb < 2)
		errorHandler(ELEMENTS_REQUIRED);

	tmp = *stack;
	new = (*stack)->next;

	tmp->next = new->next;
	tmp->prev = new;
	new->next = tmp;
	*stack = new;
}
