#include "monty.h"

/**
 * parsingManager - manage parsing of the file lines,
 * building the wanted tokens.
 */
void parsingManager(void)
{
	char *separator, *tmp = NULL;

	separator = "\n\t ";

	data->name = strtok(data->buffer, separator);

	if (data->name == NULL)
		errorHandler(INVALID_INSTRUCTION);

	if (strcmp(data->name, "push") == 0)
	{
		tmp = strtok(NULL, separator);

		if (tmp == NULL)
			errorHandler(WRONG_ARGUMENT);
		if (isnumber(tmp) == 0)
			errorHandler(WRONG_ARGUMENT);

		data->value = atoi(tmp);
	}
}
