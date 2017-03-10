#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * max + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
