#include "holberton.h"
/**
 *
 *
 *
 *
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
			for (spaces = lines -1; spaces <= 0; spaces--)
			{
				_putchar('.');
			}
			for (hashes = 1; hashes <= lines; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
