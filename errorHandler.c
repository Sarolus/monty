#include "monty.h"

/**
 * 
 * 
 * 
 */
void errorHandler(int errorID)
{
	switch (errorID)
	{
		case WRONG_USAGE:
			printf("USAGE: monty file\n");
			break;
		case ACCESS_DENIED:
			printf("Error: Can't open file %s\n", data->filename);
			break;
		case INVALID_INSTRUCTION:
			printf("L%d: unknow instruction %s\n", data->line_nb, data->functionName);
			break;
		case ALLOCATION_FAILED:
			printf("Error: malloc failed");
			break;
		case WRONG_ARGUMENT:
			printf("L%d: usage: push integer", data->line_nb);
			break;
	}
	/* FREE FUNCTION HERE */
	exit(EXIT_FAILURE);
}
