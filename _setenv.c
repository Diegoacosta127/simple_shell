#include "main.h"
#include "linked_list.h"
int _setenv(const char *name, const char *value, int overwrite)
{

	int i;
	char **array = split(, "=");
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
