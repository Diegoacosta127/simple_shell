#include "main.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: header of a linked list
 * Return: number of nodes of the linked list
 */
size_t print_list(list_t *h)
{
	size_t node_count = 0;

	while (h)
	{

	if (h->str == NULL)
	{	printf("[0] (nil)\n");
		node_count++;
	}
	else
	{
		printf("%s\n", h->str);
		node_count++;
	}

	h = h->next;
	}
	return (node_count);
}
