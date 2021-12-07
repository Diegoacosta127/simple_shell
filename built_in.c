#include "main.h"
int built_in(char **token_list)
{
if (strncmp(token_list[0], "exit", 5) == 0)
	return (1);
if (strncmp(token_list[0], "env", 4) == 0)
	return (2);
return (0);
}
