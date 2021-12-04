#include "main.h"
char *findpath(char *str, list_t *path)
{
	char *buff;
	struct stat status;

	for	(; path != NULL;)
	{
		buff = malloc(sizeof(char) * (strlen(str) + path->len + 2));
		if (!buff)
			return (0);

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
	return (NULL);
}
