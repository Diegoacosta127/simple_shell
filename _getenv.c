#include "main.h"
#include <string.h>
char *_getenv(const char *name)
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
				return (environ[index_X]);

		}


	}
	return ("Enviroment variable not found");
}
/**
 * if (need_len == count - 1)
 *		{
 * 			return (&haystack[index - (count - 1)]);
 *		}
 *
 * }
 */
