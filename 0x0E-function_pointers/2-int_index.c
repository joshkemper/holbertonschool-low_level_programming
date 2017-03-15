#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to a function that takes an int
 * Return: 0 if array is NULL and -1 if size is less than zero and i if true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || (*cmp) == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
