#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints '$', waits for an user command and prints it on the next line
  * Return: always 0
  */
int main(void)
{
	char *buf = NULL;
	size_t len;

	len = 0;
	printf("$ ");
	getline(&buf, &len, stdin);
	printf("%s", buf);
	free(buf);
	return (0);
}
