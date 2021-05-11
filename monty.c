#include "monty.h"
token_t *data;

/**
 * 
 * 
 * 
 */
int main(int argc, char *argv[])
{
	data = malloc(sizeof(token_t));

	if (argc < 2)
		printf("Error tmp"); /* temporary need error handler */

	fileOpen(argv[1]);

	return (0);
}
