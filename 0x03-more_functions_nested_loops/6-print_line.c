#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer to control lenght of line
 * Description: draws a straight line
 *
 * Return: 0 for success
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
}
