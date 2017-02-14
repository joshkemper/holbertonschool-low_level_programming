#include "holberton.h"
/**
 * print_sign - function prints sign of number + pos, - neg, 0 for 0"
 * @n: inter to check
 *
 * Description: function prints sign of number + pos, - neg, 0 for 0
 * Return: 1 for positive, -1 for negative , 0 for 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
