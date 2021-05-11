#include "monty.h"

/**
 * 
 * 
 *
 */
void fileRead(FILE *fileDescriptor)
{
	void (*f)(stack_t **stack, unsigned int line_number);
	int line_number = 0;
	stack_t **stack;

	stack = NULL;
	data->buffer = malloc(sizeof(char *));

	while (fgets(data->buffer, line_number, fileDescriptor) != NULL)
	{
		parsingManager(data->buffer, line_number);

		/* temporary location need conditions */
		f = getFunc(data);
		if (f != NULL)
			f(stack, line_number);

		line_number++;
	}

}
