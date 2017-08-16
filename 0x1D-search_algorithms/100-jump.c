#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* jump_search - searches for value in sorted array using Jump search algorithm
* @array: sorted array
* @size: size of array
* @value: value to find in the array
* Return: index position of value in array or minus if value not in array
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	size_t left;
	size_t right;
	size_t i;
	char *text;
	char *text1;

	jump = sqrt(size);
	left = 0;
	right = 0;
	i = 0;
	text = "Value found between indexes";
	text1 = "Value checked array";
	while (left < size && array[left] <= value)
	{
		printf("%s[%d] = [%d]\n", text1, array[right], array[right]);
		if ((size - 1) < (left + jump))
			right = (size - 1);
		else
			right = (left + jump);
		if (array[left] <= value && array[right] >= value)
			break;
		left += jump;
	}
	if (left > right)
		printf("%s [%lu] and [%lu]\n", text, right, left);
	else
		printf("%s [%lu] and [%lu]\n", text, left, right);
	if (array[size - 1] < value)
		printf("%s[%d] = [%d]\n", text1, array[right], array[right]);
	if (left >= size || array[left] > value)
		return (-1);
	if ((size - 1) < right)
		right = (size - 1);
	else
		right = right;
	for (i = left; i <= right && array[i] <= value; i++)
	{
		if (array[i] == value)
		{
			printf("%s[%lu] = [%d]\n", text1, i, array[i]);
			return (i);
		}
		printf("%s[%lu] = [%d]\n", text1, i, array[i]);
	}
	return (-1);
}
