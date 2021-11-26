#include "mock.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * main genérico
  */
int main (void)
{
	char *input[1024];
	size_t a;

	*input = NULL;
	split(input);
	printf("2. command line to av\n");
	for (a = 0; *(input + a); a++)
		printf("token is: %s\n", *(input + a));

	return (0);
}
