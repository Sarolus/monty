#include "monty.h"

int isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (isdigit(n[i]))
		{
			i++;
		}
		else
		{
			return (1);
		}
	}

	return (0);
}
