#include <holberton.h>
#include <stdlib.h>s
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: pointer to a string
 *
 * Return: pointer s holding string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == '\0')
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (_strlen(str) + 1));
	while (i < _strlen(str) + 1)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
