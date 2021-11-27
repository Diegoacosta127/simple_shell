#include "mock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **split(char input[])
{
	char **result = malloc(*input);
	char *tok;
	int i = 0;

	tok = strtok(input, " ");
	while (*tok != '\0' && *tok != '\n')
	{
		result[i] = tok;
		tok = strtok(NULL, " ");
		if (tok == NULL)
			break;
		i++;
	}
	return (result);
}
