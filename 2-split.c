#include "mock.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void split(char *input[])
{
	char *buf, *tok;
	size_t buffsize, i;

	buf = NULL;
	buffsize = 0;
	i = 0;
	getline(&buf, &buffsize, stdin);
	tok = strtok(buf, " ");
	while(tok)
	{
		input[i] = tok;
		tok = strtok(NULL, " ");
		i++;
	}
	free(buf);
}
