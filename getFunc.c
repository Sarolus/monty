#include "monty.h"

/**
 * 
 * 
 */
void (*getFunc())(stack_t **stack)
{
	int index = 0;

	instruction_t functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	while ((functions + index)->opcode)
	{
		if (strcmp(data->functionName, (functions + index)->opcode) == 0)
		{
			return ((functions + index)->f);
		}
		index++;
	}

	return (NULL);
}
