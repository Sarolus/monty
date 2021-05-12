#include "monty.h"

/**
 * 
 * 
 * 
 */
void parsingManager()
{
	char *separator, *tmp = NULL;

	separator = "\n\t ";

	data->functionName = strtok(data->buffer, separator);

	if (data->functionName == NULL)
		errorHandler(INVALID_INSTRUCTION);

	if (strcmp(data->functionName, "push") == 0)
	{
		tmp = strtok(NULL, separator);

		if (tmp == NULL)
			errorHandler(WRONG_ARGUMENT);
		if (isnumber(tmp) == 0)
			errorHandler(WRONG_ARGUMENT);

		data->value = atoi(tmp);
	}
}
