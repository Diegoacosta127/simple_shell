#include <stdio.h>
int main(void)
{
	extern char **environ;
	int i;

	while (*(environ + i))
	{
		printf ("%s\n", *(environ + i));
		i++;
	}
	return (0);
}
