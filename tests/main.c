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
	int counter = 0;
	char **result;
	calloc(1024, 1);

	f = read(STDIN_FILENO, buff, f);
	buff[f] = '\0';

	lines = split(buff, "\n");
	for (y = 0; lines[y]; y++)
	{
		semic = split(lines[y], ";");
		for (x = 0; semic[x]; x++)
		{
			add_node_end(&header, semic[x], 0);
			counter++;

		}
	}
//	print_list(header);
	result = malloc((counter + 1) * sizeof(char *));
	for (counter = 0; header; counter++)
	{
		result[counter] = header->str;
		header = header->next;
	}

	for (counter = 0; result[counter]; counter++)
	{
		printf("%s\n", result[counter]);
	}
return (0);
}
