#include "monty.h"

/**
 * emptyLine - Manage empty lines in monty files.
 * @line: checked lines.
 * Return: return 0 if it's an empty line, otherwise 1.
 */
int emptyLine(char *line)
{
	int i = 0;

	while (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'
	|| line[i] == '\a' || line[i] == '\b' || line[i] == '\r')
		i++;
	if (line[i] == '\0')
		return (0);
	return (1);
}
