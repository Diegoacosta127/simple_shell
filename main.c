#include "main.h"
int main(void)
{
	list_t *head = NULL;
	char *path = _getenv("PATH");
	char *aux = NULL;

	printf("%s\n", path);

	get_path(strdup(path), &head);
	print_list(head);
	aux = findpath("ls", head);

	printf("el path del comando es: [%s]\n", aux);
	free(aux);
return (0);
}
