#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - counts the length of a given string
 * @s: pointer to a string , characters in string are counted
 * Description: counts the length of string pointed to by *s
 *
 * Return: count of charachters in a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: pointer to a string
 *
 * Return: pointer s holding string
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

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
