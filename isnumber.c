#include "monty.h"

/**
 * 
 * 
 */
int isnumber(int value)
{
	int tmp = value;
	int i = 10;

	while (tmp % i != 0 && i <= value)
	{
		if (isdigit(tmp))
		{
			return (0);
		}
		else
		{
			return (1);
		}
		i *= 10;
	}

	return (0);
}
