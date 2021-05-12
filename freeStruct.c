#include "monty.h"

/**
 * freeStruct - Free all allocated data structure parameters.
 */
void freeStruct(void)
{
	if (data->buffer != NULL)
		free(data->buffer);
	data->buffer = NULL;
	if (data->stack != NULL)
		free_list(data->stack);
	data->stack = NULL;
	if (data->fileDescriptor != NULL)
		fclose(data->fileDescriptor);
	data->fileDescriptor = NULL;

	if (data != NULL)
		free(data);
	data = NULL;
}

/**
 * free_list - Free a double linked list.
 * @head: head node of our list.
 */
void free_list(stack_t *head)
{
	if (head == NULL)
	{
		return;
	}

	free_list(head->next);
	free(head);
	head = NULL;
}
