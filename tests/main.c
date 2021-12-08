#include "main.h"

int main(void)
{
	list_t *header = NULL;
	char buff[1024];
	size_t f = 1024;
	char **lines = NULL;
	char **semic = NULL;
	int x = 0;
	int y = 0;
	int z = 0;
	int counter = 0;
	char **result;
	char **preresult;
	int index = 0;
	int status;
	int lastvar;

	f = read(STDIN_FILENO, buff, f);
	buff[f] = '\0';

	lines = split(buff, "\n");
	for (y = 0; lines[y]; y++)
	{
		semic = split(lines[y], ";");
		for (x = 0; semic[x]; x++)
		{
			preresult = split(semic[x], " ");
			for (z = 0; preresult[z]; z++)
			{
				add_node_end(&header, preresult[z], index);
				counter++;
			}
			index++;
		}
	}
//	print_list(header);
	z = 0;
	result = calloc((counter + 1), sizeof(char *));

	for (; header;)
	{
		counter = 0;
		while (header && header->len == z)
		{
			result[counter] = header->str;
			header = header->next;
			counter++;
		}
		result[counter] = '\0';
		z++;

		printf("%s\n", result[0]);
		lastvar = fork();
		if (lastvar == 0)
		{
			execve(result[0], result, NULL);
		}
		wait(&status);

	}

	return (0);
}
