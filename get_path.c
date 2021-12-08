#include "main.h"
/**
  * get_path - takes the PATH enviroment variable to a node list
  * @str: PATH
  * @head: a pointer to list_t
  * Return: void
  */
void get_path(char *str, list_t **head)
{
	char *token;

	token = strtok(str, ":");
	while (token)
	{
		add_node_end(head, token, strlen(token));
		token = strtok(NULL, ":");
	}
}
