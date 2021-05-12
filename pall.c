#include "monty.h"

/**
 * 
 * 
 */
void pall(stack_t **stack)
{
	stack_t *tmp = *stack;

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
