#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Creates array of chars initializes it with a specific char
 * @size: size of array
 * @c: charachter to print in array
 * Description: creates array of chars initializes it with a specific char
 * Return: str value
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		printf("Cant allocate bytes");
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
