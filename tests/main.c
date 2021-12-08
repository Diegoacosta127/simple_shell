#include "main.h"
int main(int argc, char **argv, char **env)
{
	int z = 0, counter = 0, status, xxx, my_pid;
	char **result;
	char *path = NULL, *freemanola, *buffdup = NULL;
	list_t *head = NULL, *tmp = NULL, *header = NULL;
	(void)argc;
	(void)argv;

	for (z = 0 ; z <= counter;)
	{
		header = mklistarg(&counter, &buffdup);
		tmp = header;
		result = calloc((counter + 1), sizeof(char *));

		xxx = 0;
		while (header && header->len == z)
		{
			result[xxx] = header->str;
			header = header->next;
			xxx++;
		}
		result[xxx] = NULL;
		z++;
			freemanola = holamanola(result, &path, env, &head);
			result[0] = freemanola;
			if (1)//filexist(result)
			{
				my_pid = fork();
				if (my_pid == 0)
					execve(result[0], result, env);
					wait(&status);
			}
				free(result);
				result = NULL;
				free(freemanola);
				freemanola = NULL;
				free_list(head);
				head = NULL;
				free(path);
				path = NULL;
				free(buffdup);
				buffdup = NULL;
				free_list(tmp);
				tmp = NULL;
				if (!header)
					break;
	}
	return (0);
	}
