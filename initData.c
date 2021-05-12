#include "monty.h"

void initData()
{
	data = malloc(sizeof(prm_t));
	data->buffer = NULL;
	data->fileDescriptor = NULL;
	data->filename = NULL;
	data->name = NULL;
	data->line_nb = 1;
	data->value = 0;
	data->stack = NULL;
}
