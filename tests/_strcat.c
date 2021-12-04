/**
 * last_character - return de lenght of a string including \0
 * @s: a string
 * Return: int
 */
int last_character(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}

	return (count);
}

/**
 *_strcat - concatenates two strings. appens the src to dest
 *@dest: destination
 *@src: string
 *Return: final array
 */
char *_strcat(char *dest, char *src)
{
	int paste = last_character(dest);
	int copy = 0;

	for (copy = 0; src[copy] != '\0'; copy++)
	{
		dest[paste] = src[copy];
		paste++;
	}
	dest[paste] = '\0';

	return (dest);
}
