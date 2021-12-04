#include "linked_list.h"
#include "main.h"
/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: header of linked list
 * @n: value of the node
 * Return: new node
 */
list_t *add_nodeint_end(void)
{
	char **path = split(_getenv("PATH"), ":");
	int i;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *head = new_node;

	if (!path)
		return (NULL);

	if (!new_node)
		return (NULL);

	while (path[i])
	{
		new_node->dir = path[i];


		if (head_aux->next)
		{
			head_aux = head_aux->next;
		}
		else
		{
			head_aux->next = new_node;
			return (new_node);
		}
	}

	*head = new_node;
	return (new_node);
}
