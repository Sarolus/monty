#include "monty.h"

/**
 * 
 * 
 */
void push(stack_t **stack)
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
		errorHandler(ALLOCATION_FAILED);

	new->n = data->value;
	new->next = NULL;
	new->prev = NULL;

	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		new->prev = tmp;
		tmp->next = new;
	}
}
