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
	a = 0;
	split(input);
	printf("2. command line to av\n");
	while (input[a])
	{
		printf("%s\n", *(input + a + 1));
		a++;
	}
	return (0);
}
