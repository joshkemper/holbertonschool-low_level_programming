#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: integer
 *
 * Description: prints natural numbers from n to 98
 * Return: var n
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n == 98)
	{
		printf("%d%d\n", 9, 8);
		break;
	}
}
