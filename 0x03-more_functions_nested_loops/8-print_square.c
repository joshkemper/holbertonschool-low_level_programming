#include "holberton.h"
/**
 * print_square - takes variable n prints a square, followed by a new line
 * @size: size of square
 *
 * Description: prints a square
 * Return: o for success
 */
void print_square(int size)
{
	int i;
	int k;


	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
