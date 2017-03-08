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
 * str_concat -  function that concatenates two strings
 * @s1: first string to concatonate
 * @s2: second string to concatonate
 * Return: s concatonated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int k = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		s = malloc(_strlen(s1) + _strlen(s2) + 1 * sizeof(char));
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		while (s2[k] != '\0')
		{
			s[i] = s2[k];
			k++;
			i++;
		}
		return (s);
		free(s);
	}
}
