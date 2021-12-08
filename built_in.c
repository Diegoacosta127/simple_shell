#include "main.h"
/**
  * built_in - checks if input is a built-in function
  * @token_list: list of tokens
  * Return: an integer
  */
int built_in(char **token_list)
{
if (strncmp(token_list[0], "exit", 5) == 0)
	return (1);
if (strncmp(token_list[0], "env", 4) == 0)
	return (2);
return (0);
}
