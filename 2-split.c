#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * split - splits a string into tokens
  * @input: the string to be tokenized
  * @delimiter: list of characters to tokenize the string
  * Return: the list of tokens
  */
char **split(char *input, char *delimiter)
{
	char **result;
	char *tok = NULL;
	int i = 0;

	result = calloc(strlen(input) + 1, sizeof(char *));
	if (result == NULL)
		exit(-1);

	tok = strtok(input, delimiter);
	if (!tok)
	{
		free(result);
		result = NULL;
	}
	while (tok)
	{
		result[i] = tok;
		tok = strtok(NULL, delimiter);
		i++;
	}
	return (result);
}
