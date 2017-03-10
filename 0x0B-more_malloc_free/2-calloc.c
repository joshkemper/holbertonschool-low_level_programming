#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: size of arrayu
 * @size: size of char
 * Return: str
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
