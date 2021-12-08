#include "main.h"
/**
  * findpath - looks for a string int $PATH
  * @str: string to search
  * @path: list of directories
  * Return: a string
  */
char *findpath(char *str, list_t *path)
{
	char *buff = NULL;
	struct stat status;

	for	(; path != NULL;)
	{
		buff = calloc((strlen(str) + path->len + 2), sizeof(char));
		if (!buff)
			exit(-1);

		strcat(buff, path->str);
		strcat(buff, "/");
		strcat(buff, str);
		if (stat(buff, &status) == 0)
		{
			return	(buff);
		}
		free(buff);
		path = path->next;
	}
	return (strdup(str));
}
