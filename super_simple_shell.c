#include "main.h"
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
	char *path;
	char *tmp = NULL;
	list_t *head = NULL;
	(void)argc;
	(void)argv;
	while (on_off)
	{
		path = _getenv("PATH");
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
		if (!token_list)
			return (-1);


		if (strncmp(token_list[0], "exit", 5) == 0)
		{
			shell_reset(&input, &token_list);
			exit(0);
		}

		if (strncmp(token_list[0], "./", 2) != 0 && strncmp(token_list[0], "../", 3) != 0 && strncmp(token_list[0], "/", 1) != 0)
		{
			get_path(strdup(path), &head);
			tmp = findpath("ls", head);
			token_list[0] = tmp;
			free_list(head);
			free(tmp);
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
		free(path);
	}
	return (0);
}
