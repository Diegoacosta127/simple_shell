#include "main.h"
#include <string.h>
/**
 * main - super simple shell
 * @argc:number of arguments
 * @argv: array of string value of the arguments
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	int i;
	char *input = NULL;
	size_t aux = 0;
	char **token_list = NULL;
	int on_off = 1;
	(void)argc;
	(void)argv;

	while (on_off)
	{
		write(1, "($) ", 4);
		getline(&input, &aux, stdin);
		input[strlen(input) - 1] = '\0';
		token_list = split(input);

		if (*token_list[0] == '?')
		{	free(token_list);
			free(input);
			exit(0);
		}

		for (i = 0; token_list[i]; i++)
		{
			printf("%s \n", token_list[i]);
		}

		free(input);
		free(token_list);
		input = NULL;
		token_list = NULL;
	}
}
