#include "monty.h"

/**
 * _strcspn - return the length of the substring that do not contain
 * the rejected characters.
 * @s1: string to check
 * @s2: reference string
 * Return: return the length if success otherwise NULL.
 */
unsigned int _strcspn(char *s1, char *s2)
{
	unsigned int len = 0;

	while (*s1)
	{
		if (_strchr(s2, *s1))
		{
			return (len);
		}
		else
		{
			s1++;
			len++;
		}
	}

	return (len);
}
