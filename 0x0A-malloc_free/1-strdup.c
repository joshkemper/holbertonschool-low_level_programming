#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

	if (str == '\0' || str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (strlen(str) + 1));
	while (i < strlen(str) + 1)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
