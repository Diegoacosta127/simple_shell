#include "main.h"
/**
  * holamanola - looks if input starts with './', '../' or '/'
  * @token_list: list of tokens
  * @path: PATH
  * @env: enviroment variables
  * @head: pointer to list_t
  * Return: first token of token_list
  */
char *holamanola(char **token_list, char **path, char **env, list_t **head)
{
	char aux = 0;
if (strncmp(token_list[0], "./", 2) != 0)
	aux++;
if (strncmp(token_list[0], "../", 3) != 0)
	aux++;
if (strncmp(token_list[0], "/", 1) != 0)
	aux++;
if (aux)
{
	*path = strdup(_getenv("PATH", env));
	get_path(*path, head);
		return (findpath(token_list[0], *head));
}
return (token_list[0]);

}
