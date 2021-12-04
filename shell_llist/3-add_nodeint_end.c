#include "linked_list.h"
#include "main.h"
/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: header of linked list
 * @n: value of the node
 * Return: new node
 */
list_t *add_node_end(list_t **head, char *n)
{
	list_t *head_aux = *head;
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	new_node->dir = n;
	new_node->next = NULL;

	while (head_aux)
	{
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
