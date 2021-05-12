#include "monty.h"

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: head of our stack.
 */
void pall(stack_t **stack)
{
	stack_t *tmp = *stack;

	if (tmp == NULL || stack == NULL)
		exit(EXIT_FAILURE);

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}
