#include "monty.h"
prm_t *data;

/**
 * 
 * 
 * 
 */
int main(int argc, char *argv[])
{
	data = malloc(sizeof(prm_t));

	if (argc < 2)
		errorHandler(WRONG_USAGE);

	data->filename = argv[1];

	if (data->filename == NULL)
		errorHandler(ACCESS_DENIED);

	data->fileDescriptor = fopen(data->filename, "r");

	if (data->fileDescriptor == NULL)
		errorHandler(ACCESS_DENIED);

	fileRead();

	/* FREE FUNCTION HERE, put fclose in it */
	fclose(data->fileDescriptor);

	exit(EXIT_SUCCESS);

	return (0);
}
