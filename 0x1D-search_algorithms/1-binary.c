#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Ssearches for a value in a sorted array of integers
 * @array: sorted array of int's
 * @size: size of array
 * @value: value to search for in array
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start;
	size_t end;
	size_t mid;
	size_t i;

	i = 0;
	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[i]);
		printf("\n");
		mid = ((start + end) / 2);
		if (array[mid] == value)
		{
			return (mid);
		}
		if (value < array[mid])
		{
			end = mid;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1);
}
