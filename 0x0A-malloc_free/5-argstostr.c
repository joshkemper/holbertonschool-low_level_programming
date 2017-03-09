#include "holberton.h"
#include <stdlib.h>
/**
 * total_length - total length of all strings
 *
 */
unsigned int total_length(int ac, char **av)
{
	unsigned int n;
	n = ac + 1 + sum_length(av);
	n = n * sizeof(char);
	return (n);
}
/**
 * sum_length - sum of all strings
 *
 */
unsigned int sum_length(int **av)
{
	int i = 0;
	unsigned int n = 0;

	while(av[i] != NULL)
	{
		n += _strlen(av[i]);
		i++;
	}
	return(n);
}
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
 * copy_strings - copy strings to av
 *
 */
char copy_strings(**av,char *s)
{
	int i = 0;

	while(av != '\0')
	{
		s[i] = av[i];
		i++;
	}
}
char *argstostr(int ac, char *av)
{
	unsigned int bytes;
	char *s;

	bytes = total_length(ac,av);
	{
		s = malloc(bytes);
		if ( s == NULL)
		{
			return (NULL);
		}
		copy_strings(av,s);
	}
	return (s);
}
