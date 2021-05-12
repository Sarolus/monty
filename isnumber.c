#include "monty.h"

int isnumber(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0' && isdigit(n[i]))
	{
		i++;
	}
	if (i == _strlen(n) - 1)
		return (1);
	else
		return (0);
}
