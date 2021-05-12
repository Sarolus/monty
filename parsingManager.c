#include "monty.h"

/**
 * 
 * 
 * 
 */
void parsingManager()
{
	char *saveptr, *separator;

	separator = "\n\t ";

	/* if (data->buffer == NULL)
		errorHandler(ALLOCATION_FAILED); */

	data->functionName = _strtok(data->buffer, separator, &saveptr);

	/* if (data->functionName == NULL)
		errorHandler(INVALID_INSTRUCTION); */

	if (strcmp(data->functionName, "push") == 0)
		data->value = atoi(_strtok(NULL, separator, &saveptr));
}
