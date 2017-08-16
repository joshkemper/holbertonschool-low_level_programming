#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * interpolation_search - searches for value in sorted array using Jump search algorithm
 * @array: sorted array
 * @size: size of array
 * @value: value to find in the array
 * Return: index position of value in array or minus if value not in array
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low ;
	int high;
	int mid;

	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid -1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}
