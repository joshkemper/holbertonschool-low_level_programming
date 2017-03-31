#include <stdio.h>
#include "holberton.h"


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to convert
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned int shift;

	for (i = 0; i < 64; i++)
	{
		shift = (n << 1);
		shift = (shift >> 1);
		if (n != shift)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n = n << 1;
	}
}
