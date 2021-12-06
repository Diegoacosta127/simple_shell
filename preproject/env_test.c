#include "main.h"
int main(int argc, char **argv, char **env)
{
	int i = 0;

	if (env)
	while (env[i])
	{
		printf("%s\n", env[i]);
		i++;
	}
	(void)argc;
	(void)argv;
	return (0);
}
