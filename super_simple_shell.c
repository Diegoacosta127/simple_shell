#include "main.h"
int prompt(int *on_off, char **input, char ***token_list)
{
	size_t aux = 0;
	ssize_t len = 0;

	if (isatty(STDIN_FILENO))
		write(1, "#cisfun($) ", 11);
	else
		*on_off = 0;

	len = getline(input, &aux, stdin);
	if (len == -1)
	{
		free(*input);
		return (-1);
	}
	if (len == 1)
	{
		var_reset(1, input);
		return (1);
	}

	if (*(*input + len - 1) == '\n')
		*(*input + len - 1) = '\0';

	*token_list = split(*input, " ");
	if (*token_list == NULL)
	{
		var_reset(1, input);
		return (1);
	}
	return (0);
}
int filexist(char **token_list)
{
	struct stat statbuff;

	if (stat(token_list[0], &statbuff) == -1)
	{
		perror(token_list[0]);
		return (0);
	}
	return (1);
}
/**
 * main - super simple shell
 * @argc:number of arguments
 * @argv: array of string value of the arguments
 * @env: array of strings that contains environment variables
 * Return: 0 on succes
 */
int main(int argc, char **argv, char **env)
{
	char *input = NULL, **token_list = NULL, *path = NULL;
	int on_off = 1, status = 0, my_pid = 0, prompt_st = 0, isbuiltin = 0;
	list_t *head = NULL;
	(void)argc;
	(void)argv;
	while (on_off)
	{
		prompt_st = prompt(&on_off, &input, &token_list);
		if (prompt_st == -1)
			break;
		if (prompt_st == 1)
			continue;
		isbuiltin = built_in(token_list);
		if (isbuiltin == 1)
		{
			var_reset(2, &input, &token_list);
			_exit(0);
		}
		if (isbuiltin == 2)
		{
			_env();
			var_reset(2, &input, &token_list);
			continue;
		}
			token_list[0] = holamanola(token_list, &path, env, &head);

			if (filexist(token_list))
			{
				my_pid = fork();
				if (my_pid == 0)
					execve(token_list[0], token_list, env);
				wait(&status);
			}
		free_list(head);
		head = NULL;
		var_reset(3, token_list, &path, &input);
		free(token_list);
		token_list = NULL;
	}
	return (0);
}
