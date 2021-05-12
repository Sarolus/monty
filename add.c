#include "monty.h"

/**
 * add - adds the top two elements of the stack.
 * @stack: head of our stack.
 */
void add(stack_t **stack)
{
	stack_t *tmp = *stack;
	int sum;

	if (tmp == NULL)
		errorHandler2(ADD_ELEMENTS);

	tmp = tmp->next;
	sum = tmp->n + tmp->prev->n;
	tmp->n = sum;
}
