#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: head of our stack.
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
