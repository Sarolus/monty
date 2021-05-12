#include "monty.h"

/**
 * _strspn - return the length of the substring that contain
 * only accepted characters.
 * @s1: string to check.
 * @s2: reference string
 * Return: return the length if success otherwise NULL.
 */
unsigned int _strspn(char *s1, char *s2)
{
	unsigned int len = 0;

	while (s1[len])
	/* return s1 char position if found in s2 using strchr */
	{
		if (_strchr(s2, s1[len]) != NULL)
		{
			len++;
		}
		else
		{
			break;
		}
	}

	return (len);
}
