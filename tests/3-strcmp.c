/**
 *_strcmp - concatenates two strings. appens the src to dest
 *@s1: string
 *@s2: string
 *Return: 1, 0, -1
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	for (; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i];)
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
