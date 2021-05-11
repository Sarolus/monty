#include "monty.h"

/**
 * 
 * 
 * 
 */
void fileOpen(char *filename)
{
	FILE *fileDescriptor;

	/* if (filename == NULL) */
	/* error handler here */

	fileDescriptor = fopen(filename, "r");

	/* if (fileDescriptor == NULL) */
	/* error handler here */

	fileRead(fileDescriptor);

	fclose(fileDescriptor);
}
