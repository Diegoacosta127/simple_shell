#include "main.h"
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
