#include "monty.h"

/**
 * _isdigit - Checks digits
 * @c: digit
 * Return: Return 1 if between 0 & 9 otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}

	return (0);
}

int isnumber(char *n)
{
	int i = 0;

	/* while (n[i] != '\0' && n[i] != ' ')
		i++; */
	if (n[i] == '-' || n[i] == '+')
		i++;
	
	while (n[i] != '\0')
	{
		if (!_isdigit(n[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}
