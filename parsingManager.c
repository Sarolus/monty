#include "monty.h"

/**
 * 
 * 
 * 
 */
void parsingManager()
{
	char *saveptr, *separator, *tmp;

	separator = "\n\t ";

	tmp = malloc(sizeof(char));
	tmp = NULL;

	if (data->buffer == NULL)
		errorHandler(ALLOCATION_FAILED);

	data->functionName = _strtok(data->buffer, separator, &saveptr);

	if (data->functionName == NULL)
		errorHandler(INVALID_INSTRUCTION);

	if (strcmp(data->functionName, "push") == 0)
		tmp = _strtok(NULL, separator, &saveptr);

	printf("%s\n", tmp);
	if (isnumber(tmp) != 0 /* || (tmp[0] == '-' && isnumber((tmp + 1)) != 0) */)
	{
		errorHandler(WRONG_ARGUMENT);
	}
	
	data->value = atoi(tmp);
}
