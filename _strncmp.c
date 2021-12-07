#include "main.h"
/**
  * _strncmp - compares a string to n bytes of another string
  * @s1: string test
  * @s2: string to look into
  * @n: number of bytes
  * Return: an integer
  */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		if (s1[i] == s2[i])
			count++;
		else
			return (s1[count] - s2[count]);
	}
	return (0);
}
