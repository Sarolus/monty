#include "monty.h"

/**
 * 
 * 
 * 
 */
void fileOpen()
{

	/* if (filename == NULL) */
	/* error handler here */

	data->fileDescriptor = fopen(data->filename, "r");

	/* if (fileDescriptor == NULL) */
	/* error handler here */

	fileRead();

	fclose(data->fileDescriptor);
}
