#include "mock.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * main genérico
  */
int main (void)
{
	char **buff;
	int a = 0;
	size_t aux = 0;
	char *txt = NULL;

	getline(&txt, &aux, stdin);
	buff =	split(txt);
	for (a = 0; *(buff + a); a++)
		printf("token is: %s\n", *(buff + a));

	free(buff);
	free(txt);
	return (0);
}
