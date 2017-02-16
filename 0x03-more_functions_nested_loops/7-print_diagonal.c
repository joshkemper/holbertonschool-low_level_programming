#include "holberton.h"
/**
 * print_diagonal - print diagonal
 * @n: integer set size of triangle
 * Description: prints diagonal line of slashes
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int j;
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
