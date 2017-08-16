#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: Array of integers
 * @size: size of array
 * @value: value to search for in array
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i++;
		}
	}
	return (-1);
}
