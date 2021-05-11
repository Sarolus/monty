#include "monty.h"

/**
 * 
 * 
 */
void push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new;
	stack_t *tmp;

	new = NULL;
	tmp = *stack;

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		exit(EXIT_FAILURE);
	}

	new->n = data->value;
	new->next = NULL;

	if (*stack == NULL)
	{
		new->prev = NULL;
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
