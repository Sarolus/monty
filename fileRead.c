#include "monty.h"

/**
 * 
 * 
 *
 */
void fileRead()
{
	void (*f)(stack_t **stack);

	data->buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (data->buffer == NULL)
		return;

	while (fgets(data->buffer, BUFFER_SIZE, data->fileDescriptor) != NULL)
	{
		parsingManager();

		f = getFunc();
		if (f != NULL)
			f(&data->stack);
		data->line_nb++;
	}

}
