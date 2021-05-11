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
		printf("Error tmp"); /* temporary need error handler */

	data->filename = argv[1];

	fileOpen();

	return (0);
}
