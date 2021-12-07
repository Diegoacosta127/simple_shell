#include "main.h"
#include <string.h>
/**
  * _getenv - looks for enviroment variable
  * @name: name of the variable
  * @environ: a enviroment variable
  * Return: a string, or NULL
  */
char *_getenv(const char *name, char **environ)
{
	int index_X = 0;
	int index_Y = 0;
	int aux = 0;
	size_t count = 0;

	if (name == NULL)
	{
		return ("Enviroment variable not found");
	}

	for (index_X = 0; environ[index_X] != 0 && name[aux] != 0; index_X++)
	{
		for (index_Y = 0; environ[index_X][index_Y] && name[aux]; index_Y++)
		{
			if (environ[index_X][index_Y] == name[aux])
			{
				count++;
				aux++;
			}
			else
			{
				count = 0;
				aux = 0;
				break;
			}
			if (count == strlen(name))
				return (environ[index_X] + strlen(name) + 1);

		}


	}
	return (NULL);
}
