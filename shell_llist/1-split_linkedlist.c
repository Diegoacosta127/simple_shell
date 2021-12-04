#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_split - make a linked list of tokens
 *@head: header of linked list
 *@input: a string to tokenizer
 *@delimiter: a delimiter string
 *Return: a pointer to header
 */
int _split(list_t **head, char *input, char *delimiter)
{
	char *tok = NULL;
	int i = 0;

	tok = strtok(input, delimiter);
	while (tok)
	{
		add_node_end(head, input, i);
		tok = strtok(NULL, delimiter);
		i++;
	}
	return (i);
}
