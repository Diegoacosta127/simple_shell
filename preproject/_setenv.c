#include "main.h"
#include "linked_list.h"
int _setenv(const char *name, const char *value, int overwrite)
{
	char **array = environ;
	char *aux;
	aux = _getenv(name);
	if (aux == NULL)
	{
		environ = _realloc(environ, strlen(*environ), strlen(*environ) + 8);

	}
	return (0);
	
}
