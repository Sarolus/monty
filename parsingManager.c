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

	if (data->buffer == NULL)
		printf("Error tmp"); /* temporary, need error handler */

	data->functionName = strtok_r(data->buffer, separator, &saveptr);
	if (strcmp(data->functionName, "push") == 0)
		data->value = abs(atoi(strtok_r(NULL, separator, &saveptr)));

	if (isnumber(data->value) != 0)
		errorHandler(WRONG_ARGUMENT);

	if (data->functionName == NULL)
		errorHandler(INVALID_INSTRUCTION);
}
