#include <stdio.h>
/**
  * main - prints arguments
  * @ac: argument counter
  * @av: argument vector
  * Return: always 0
  */
int main(int ac, char **av)
{
	int a;

	(void) ac;
	a = 0;
	while (*(av + a))
	{
		printf("%s\n", *(av + a));
		a++;
	}
	return (0);
}
