#include <stdio.h>
#include <stdlib.h>
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
