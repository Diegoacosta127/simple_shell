#include "main.h"
/**
 * _copy_list - copy all the elements of a list_t list to an array.
 * @h: header of a linked list
 * @token_list: a pointer to an array of strings
 * Return: number of nodes of the linked list
 */
size_t _copy_list(list_t *h, char ***token_list)
{
	int i = 0;

	while (h != NULL)
	{
		*token_list[i] = h->dir;
		printf("%s----------------------\n", *token_list[i]);
		i++;
		h = h->next;
	}
	return (0);
}
