#include "monty.h"

/**
 * _strlen - Returns lenght of a string.
 * @s: string
 * Return: Return result
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (!s[length])
	{
		length++;
	}

	return (length);
}
