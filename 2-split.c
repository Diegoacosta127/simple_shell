#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char **split(char *input)
{
	char **result;
	char *tok = NULL;
	int i = 0;

	if (input == NULL)
		exit(-1);

	result = calloc(strlen(input), sizeof(char *));
	if (result == NULL)
		exit(-1);

	tok = strtok(input, " ");
	while (tok)
	{
		result[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	return (result);
}
