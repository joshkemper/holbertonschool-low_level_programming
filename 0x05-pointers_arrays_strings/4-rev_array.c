#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to array
 * @n: number of array elements
 * Description: function that reverses the content of an array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int t;
	int end = n - 1;

	for (c = 0; c < n / 2; c++, end--)
	{
		t = a[c];
		a[c] = a[end];
		a[end] = t;
	}
}
