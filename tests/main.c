#include "main.h"
int main(void)
{
	list_t *head = NULL;
	char *path = _getenv("PATH");
	char *aux = NULL;

	get_path(strdup(path), &head);
	aux = findpath("ls", head);
return (0);
}
