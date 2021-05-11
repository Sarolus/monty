#include "monty.h"

/**
 * 
 * 
 * 
 */
void parsingManager(char *buffer, unsigned int line_number __attribute__((unused)))
{
	char *saveptr, *separator;

	separator = "\n\t ";

	if (buffer == NULL)
		printf("Error tmp"); /* temporary, need error handler */

	data->opcode = strtok_r(buffer, separator, &saveptr);

	data->value = atoi(strtok_r(NULL, separator, &saveptr));

	/* if (opcode == NULL) */
	/* error handling, dunno which one for now */
}
