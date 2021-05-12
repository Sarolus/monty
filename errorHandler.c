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
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case ACCESS_DENIED:
			fprintf(stderr, "Error: Can't open file %s\n", data->filename);
			break;
		case INVALID_INSTRUCTION:
			fprintf(stderr, "L%d: unknow instruction %s\n", data->line_nb, data->functionName);
			break;
		case ALLOCATION_FAILED:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case WRONG_ARGUMENT:
			fprintf(stderr, "L%d: usage: push integer\n", data->line_nb);
			break;
		case PINT_EMPTY:
			fprintf(stderr, "L%d: can't pint, stack empty\n", data->line_nb);
			break;
	}
	freeStruct();
	exit(EXIT_FAILURE);
}
