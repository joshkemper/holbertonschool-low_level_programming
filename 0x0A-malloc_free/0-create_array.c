#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

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
