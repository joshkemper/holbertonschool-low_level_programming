#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to convert
 * Return: none
 */

void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int shift;
	unsigned int size = sizeof(n) * 8;
	unsigned int flag = 1;

	for (i = 0; i < size; i++)
	{
		shift = (n << 1);
		shift = (shift >> 1);
		if (n != shift)
		{
			flag = 0;
			_putchar('1');
		}
		else if (!flag)
		{
			_putchar('0');
		}
		n = n << 1;
	}
	if (flag == 1)
	{
		_putchar('0');
	}

}
