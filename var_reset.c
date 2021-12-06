#include "main.h"
/**
* var_reset - a function that frees and set to NULL variables
*@numb: bumber of variables to free and set to NULL
*/
void var_reset(int numb, ...)
{
	int i;
	char **aux;
	va_list pointers_frees;
	va_list pointers_nulls;

	va_start(pointers_frees, numb);
	va_copy(pointers_nulls, pointers_frees);

	for (i = 0; i < numb; i++)
	{
		aux = va_arg(pointers_frees, char **);
		free(*aux);
	}
	va_end(pointers_frees);

	for (i = 0; i < numb; i++)
	{
		aux = va_arg(pointers_nulls, char **);
			*aux = NULL;
	}
	va_end(pointers_nulls);
}
