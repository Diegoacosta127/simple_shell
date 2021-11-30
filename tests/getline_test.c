#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main(void)
{
	char *buff = NULL;
	size_t a = 0;
	char *tok;

write(1, "#cisfun($) ", 11);
getline(&buff, &a, stdin);
printf("%s", buff);
tok = strtok(buff, " ");
while (tok)
{
	printf("%s\n", tok);
	tok = strtok(NULL, " ");
}
free(buff);
buff = NULL;
return (0);
}
