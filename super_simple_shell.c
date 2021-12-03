#include "main.h"
#include <string.h>
#include <sys/stat.h>
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
int main(int argc, char **argv, char **env)
{
	struct stat statbuff;
	size_t len = 0, aux = 0;
	char *input = NULL;
	char **token_list = NULL;
	int on_off = 1, status = 0, my_pid = 0;
	(void)argc;
	(void)argv;
	while (on_off)
	{
		if (isatty(STDIN_FILENO))
			write(1, "#cisfun($) ", 11);
		else
			on_off = 0;

		len = getline(&input, &aux, stdin);
		if (len == -1)
		{
			free(input);
			break;
		}
		if (len	== 1)
		{
			free(input);
			token_list = NULL;
			input = NULL;
			continue;
		}
		if (input[len - 1] == '\n')
			input[len - 1] = '\0';

		token_list = split(input, " ");

		if (*token_list)
		{
			if (*token_list[0] == '?')
			{
				shell_reset(&input, &token_list);
				exit(0);
			}
			if (stat(token_list[0], &statbuff) == -1)
			{
				perror("file not found");
				shell_reset(&input, &token_list);
					continue;
			}

			my_pid = fork();
			if (my_pid == 0)
				execve(token_list[0], token_list, env);

			wait(&status);
			shell_reset(&input, &token_list);
		}
	}
	return (0);
}
