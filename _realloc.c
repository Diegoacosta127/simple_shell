#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: array to reallocate
 * @old_size: old size of ptr array
 * @new_size: new size for reallocated array
 * Return: a pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	if (!ptr)
		return (new_ptr);

	new_ptr = memcpy(new_ptr, ptr, old_size);
	free(ptr);

	return (new_ptr);
}
