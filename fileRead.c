#include "monty.h"

/**
 * 
 * 
 *
 */
void fileRead()
{
	void (*f)(stack_t **stack);
	int line_number = 0;
	stack_t *stack;

	stack = NULL;
	data->buffer = malloc(sizeof(char) * BUFFERSIZE);

	if (data->buffer == NULL)
		return;

	while (fgets(data->buffer, BUFFERSIZE, data->fileDescriptor) != NULL)
	{
		parsingManager();

		/* temporary location need conditions */
		f = getFunc();
		if (f != NULL)
			f(&stack);

		line_number++;
	}

}
