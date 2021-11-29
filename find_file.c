#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
int main(int argc, char *argv[])
{
	struct stat buf;
	int i;
	char cwd[1024];

	getcwd(cwd, 1024);
	if (argc < 2)
	{
		printf("Usage: %s filename ...\n", cwd);
		return (-1);
	}
	i = 1;
	while (argv[i])
	{
		printf("%s:", argv[i]);
		if (stat(argv[i], &buf) == 0)
		{
			printf(" FOUND\n");
		}
		else
		{
			printf(" NOT FOUND\n");
		}
		i++;
	}
    return (0);
}
