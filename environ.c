#include <stdio.h>
#include "main.h"
/**
  * main - prints the enviroment using the global variable 'environ'
  * Return: always 0
  */
int main(void)
{
	int i;

	while (*(environ + i))
	{
		printf("%s\n", *(environ + i));
		i++;
	}
	return (0);
}
