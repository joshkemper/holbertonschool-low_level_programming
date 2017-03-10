#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: start number
 * @max: end number
 * Return: ptr pointer to array of nums
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}
	return (ptr);
}
