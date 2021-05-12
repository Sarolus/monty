#include "monty.h"

/**
 * pint - print the value at the top of the stack.
 * @stack: head of our stack.
 */
void pint(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		errorHandler(PINT_EMPTY);

	printf("%d\n", tmp->n);
}
