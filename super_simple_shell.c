#include "main.h"
#include <string.h>
/**
 * shell_reset - a function that frees and set to NULL variables
 *@input: variable
 *@token_list: variable
 */
void shell_reset(char **input, char ***token_list)
{
	free(*input);
	free(*token_list);
	*input = NULL;
	*token_list = NULL;
}
/**
 * main - super simple shell
 * @argc:number of arguments
 * @argv: array of string value of the arguments
 * Return: 0 on succes
 */
int main(int argc, char **argv)
{
	size_t len;
	int i;
	char *input = NULL;
	size_t aux = 0;
	char **token_list = NULL;
	int on_off = 1;
	(void)argc;
	(void)argv;

	while (on_off)
	{
		write(1, "#cisfun($) ", 11);
		len = getline(&input, &aux, stdin);

		if (len == 1)
		{
			free(input);
			token_list = NULL;
			input = NULL;
			continue;
		}
		input[len - 1] = '\0';
		token_list = split(input, " ");
		if (*token_list)
		{
			if (*token_list[0] == '?')
			{
				shell_reset(&input, &token_list);
				exit(0);
			}

			for (i = 0; token_list[i]; i++)
			{
				printf("%s \n", token_list[i]);
			}
		}

		shell_reset(&input, &token_list);
	}
	return (0);
}
