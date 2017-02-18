#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: size of triangle
 * Description: prints a triangle to size n
 *
 * Return: 0 for success
 */
void print_triangle(int size)
{
	int lines;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size >= 0)
	{
		for (lines = 0; lines < size; lines++)
		{
			for (spaces = 1; spaces < (size - lines); spaces++)
			{
				_putchar(' ');
			}
			for (hashes = spaces; hashes <= size; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
