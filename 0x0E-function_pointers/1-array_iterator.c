#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function given as a parameter element of an array.
 * @array: array
 * @size: number of array elemrents to print
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size <= 0 || *action == NULL)
	{
		return;
	}
	else
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
