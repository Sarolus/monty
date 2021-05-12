#include "monty.h"

/**
 * _strtok - Break string into multiple tokens using separators.
 * @str: string to check.
 * @sep: separator characters
 * @saveptr: a pointer that maintain the successive
 * calls during the string check.
 * Return: return a pointer to the first token found in the string;
 * otherwise return NULL if there's no tokens left.
 */
char *_strtok(char *str, char *sep, char **saveptr)
{
	char *end = NULL;

	if (str == NULL)
		str = *saveptr;

	if (*str == '\0')
	{
		*saveptr = str;
		return (NULL);
	}

	str += _strspn(str, sep);

	if (*str == '#')
	{
		*saveptr = str;
		return (NULL);
	}

	if (*str == '\0')
	{
		*saveptr = str;
		return (NULL);
	}

	end = str + _strcspn(str, sep);

	if (*end == '\0')
	{
		*saveptr = end;
		return (str);
	}

	*end = '\0';
	*saveptr = end + 1;
	return (str);
}
