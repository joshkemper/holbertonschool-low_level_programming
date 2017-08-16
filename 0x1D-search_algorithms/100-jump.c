#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t left;
	size_t right;
	size_t i;

	jump = sqrt(size);
	left = 0;
	right = 0;
	i = 0;
	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", array[right], array[right]);
		if ((size - 1) < (left + jump))
		{
			right = (size - 1);
		}
		else
		{
			right = (left + jump);
		}
		if (array[left] <= value && array[right] >= value)
		{
			break;
		}
		left += jump;
	}
	if (left > right)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", right, left);	
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	}
	if (array[size-1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", array[right], array[right]);
	}
	if (left >= size || array[left] > value)
	{
		return (-1);
	}
	if ((size - 1) < right)
	{
		right = (size - 1);
	}
	else
	{
		right = right;
	}
	for (i = left; i <= right && array[i] <= value; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
