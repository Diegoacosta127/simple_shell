#include "main.h"
char *findpath(char *str, list_t *path)
{
	char *buff = NULL;
	struct stat status;

	for	(; path != NULL;)
	{
		buff = malloc(sizeof(char) * (strlen(str) + path->len + 2));
		buff = memset(buff, '\0', (sizeof(char) * (strlen(str) + path->len + 2)));
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
