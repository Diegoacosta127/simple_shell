#include "main.h"
list_t *mklistarg(int *counter, char **buffdup)
{
	list_t *header = NULL;
	char buff[1024];
	size_t f = 1024;
	char **lines = NULL, **semic = NULL;
	int x = 0, y = 0, z = 0;
	char **preresult;
	int index = 0;

	f = read(STDIN_FILENO, buff, f);
	buff[f] = '\0';
	*buffdup = strdup(buff);
	lines = split(*buffdup, "\n");
	for (y = 0; lines[y]; y++)
	{
		semic = split(lines[y], ";");
		for (x = 0; semic[x]; x++)
		{
			preresult = split(semic[x], " ");
			for (z = 0; preresult[z]; z++)
			{
				add_node_end(&header, preresult[z], index);
				*counter = *counter + 1;
			}
			index++;
		}
	}

	free(lines);
	free(semic);
	free(preresult);
	return (header);
}
