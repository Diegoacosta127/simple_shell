#include "main.h"
#include "linked_list.h"
int main(void)
{
	int i;
	char **array = split(_getenv("PATH"), ":");
	list_t *head = NULL;

	for (i = 0; array[i]; i++)
	{
		add_node_end(&head, array[i]);
	}
	printf("cantidad de carpetas en PATH: [%lu]\n", print_list(head));
	free_list(head);
	free(array);
return (0);
}
