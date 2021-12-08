#include "main.h"
/**
  * _env - prints the enviroment using the global variable 'environ'
  */
void _env(void)
{
	int i = 0;

	if (environ)
		while (*(environ + i))
		{
			printf("%s\n", *(environ + i));
			i++;
		}

}
