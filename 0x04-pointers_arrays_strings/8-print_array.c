#include "holberton.h"
#include <stdio.h>
/**
 * print_array  - prints n elements of an array of integers
 * @a: array passed to function
 * @n: size of array passed
 *
 * Description: prints n elements of an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	putchar('\n');
}
