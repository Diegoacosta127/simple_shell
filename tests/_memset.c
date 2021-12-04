/**
 * _memset - fills n bytes with a character (b)
 * @s: an string
 * @b: a character
 * @n: lenght of the string
 * Return: the string modified;
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);

}
