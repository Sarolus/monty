#include "monty.h"

/**
 * 
 * 
 */
void (*getFunc(token_t *prmTokens))(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	int index;

	instruction_t functions[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	while (functions[index].opcode)
	{
		if (strcmp(prmTokens->opcode, functions[index].opcode) == 0)
		{
			return (functions[index].f);
		}
		index++;
	}

	return (NULL);
}
