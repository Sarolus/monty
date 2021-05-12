#include "monty.h"

/**
 * fileRead - Read the opened file and gets the lines of it.
 */
void fileRead(void)
{
	void (*f)(stack_t **stack);

	data->buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (data->buffer == NULL)
		return;

	while (fgets(data->buffer, BUFFER_SIZE, data->fileDescriptor) != NULL)
	{
		if (emptyLine(data->buffer) != 0)
		{
			parsingManager();

			f = getFunc();
			if (f != NULL)
				f(&data->stack);
			else
				errorHandler(INVALID_INSTRUCTION);
		}
		data->line_nb++;
	}
}
