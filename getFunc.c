#include "monty.h"

/**
 * getFunc - Check the opcode and return the adequate function.
 * Return: return the adequate function.
 */
void (*getFunc())(stack_t **stack)
{
	int index = 0;

	instruction_t functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while ((functions + index)->opcode)
	{
		if (strcmp(data->name, (functions + index)->opcode) == 0)
		{
			return ((functions + index)->f);
		}
		index++;
	}

	return (NULL);
}
