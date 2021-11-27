#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
void fork_wait(void)
{
	pid_t my_pid;
	int aux;
	int i;
	char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

	for (i = 0; i < 5; i++)
	{
		my_pid = fork();
		if (my_pid == -1)
			perror("error");

		if (my_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error: ");
			}
		}
		else
		{
			wait(&aux);
			printf("--------------------------uwu------------------------\n");
			// write(1, "-------------------------------------------------\n", 50);
		}
	}
}
