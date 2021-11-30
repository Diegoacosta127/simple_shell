#include "main.h"
int main(void)
{
	char **tok;
	int i = 1;

	tok =	split(_getenv("PATH"), ":");
	while (tok[i])
	{
		printf("%s\n", tok[i]);
		i++;
	}
	free(tok);
	return (0);
}
