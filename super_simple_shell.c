#include "main.h"
int prompt(int *on_off, char **input, size_t *aux, ssize_t *len, char ***token_list)
{

	if (isatty(STDIN_FILENO))
		write(1, "#cisfun($) ", 11);
	else
		*on_off = 0;

	*len = getline(input, aux, stdin);
	if (*len == -1)
	{
		free(*input);
		return (-1);
	}
	if (*len == 1)
	{
		free(*input);
		*input = NULL;
		return (1);
	}

	if (*(*input + *len - 1) == '\n')
		*(*input + *len - 1) = '\0';

	*token_list = split(*input, " ");
	if (*token_list == NULL)
		return (1);
	return (0);
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
	struct stat statbuff;
	ssize_t len = 0;
	size_t aux = 0;
	char *input = NULL;
	char **token_list = NULL;
	int on_off = 1, status = 0, my_pid = 0;
	char *path = NULL;
	char *tmp = NULL;
	list_t *head = NULL;
	int prompt_st = 0;
	(void)argc;
	(void)argv;
	while (on_off)
	{
		prompt_st = prompt(&on_off, &input, &aux, &len, &token_list);
		if (prompt_st == -1)
			break;
		if (prompt_st == 1)
			continue;

		if (strncmp(token_list[0], "exit", 5) == 0)
		{
			var_reset(1, &input);
			free(token_list);
			execve(token_list[0], token_list, env);
			exit(0);
		}

		if (strncmp(token_list[0], "./", 2) != 0 && strncmp(token_list[0], "../", 3) != 0 && strncmp(token_list[0], "/", 1) != 0)
		{
			path = strdup(_getenv("PATH", env));
			get_path(path, &head);
			tmp = findpath(token_list[0], head);
			token_list[0] = tmp;
		}

		if (stat(token_list[0], &statbuff) == -1)
		{
			perror("file not found");
			var_reset(1, &input);
			free(token_list);
			token_list = NULL;
				continue;
		}

		my_pid = fork();
		if (my_pid == 0)
			execve(token_list[0], token_list, env);

		wait(&status);
		free(token_list);
		token_list = NULL;
		free_list(head);
		head = NULL;
		var_reset(3, &path, &tmp, &input);
	}
	return (0);
}
