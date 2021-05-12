#include "monty.h"
prm_t *data;

/**
 * 
 * 
 * 
 */
int main(int argc, char *argv[])
{
	argc = 2;
	argv[1] = "bytecodes/001.m";
	initData();
	
	if (argc < 2 || argc > 2)
		errorHandler(WRONG_USAGE);

	data->filename = argv[1];

	if (data->filename == NULL)
		errorHandler(ACCESS_DENIED);

	data->fileDescriptor = fopen(data->filename, "r");

	if (data->fileDescriptor == NULL)
		errorHandler(ACCESS_DENIED);

	fileRead();

	freeStruct();
	exit(EXIT_SUCCESS);

	return (0);
}
