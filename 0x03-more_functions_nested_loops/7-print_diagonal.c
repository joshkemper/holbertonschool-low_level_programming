#include "holberton.h"
/**
 * print_diagonal - ptints slashes in diagonal line n times
 * @n: times to print slash
(*
* Description: prints slashes in diagonal line to size n
(*
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
			for (j = 1; j <= i - 1; j++)
			{
				if (j == 0 && i == 0)
				{
					_putchar('\\');

				}
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
