#include "monty.h"

/**
 * _strchr - check for specified character in a string
 * @str: the string
 * @c: the specified character
 * Return: return our string if true, otherwise NULL if false.
 */
char *_strchr(char *str, char c)
{
	char *find = NULL;

	if (str != NULL)
	{
		do {
			if (*str == c)
			{
				find = str;
				break;
			}
		} while (*str++);
	}

	return (find);
}
