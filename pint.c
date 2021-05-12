#include "monty.h"

/**
 * 
 * 
 */
void pint(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		errorHandler(PINT_EMPTY);

	printf("%d\n", tmp->n);
}
