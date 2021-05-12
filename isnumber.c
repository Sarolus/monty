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

/**
 * isnumber - Check if number or not
 * @n: Number that we check
 * Return: return 1 if number, otherwise 0
 */
int isnumber(char *n)
{
	int i = 0;

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
