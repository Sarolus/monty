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
		data->value = atoi(strtok_r(NULL, separator, &saveptr));

	/* if (opcode == NULL) */
	/* error handling, dunno which one for now */
}
