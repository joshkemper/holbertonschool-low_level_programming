#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of integers
 *
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
	end = size -1;
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			if (i == end-1)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("%d", array[i]);
		printf("\n");
		mid = ((start + end)/2);
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
