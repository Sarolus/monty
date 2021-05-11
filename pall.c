#include "monty.h"

/**
 * 
 * 
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
		exit(EXIT_FAILURE);

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
