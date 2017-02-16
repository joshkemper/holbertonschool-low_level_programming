#include "holberton.h"
/**
 * print_numbers  - prints the numbers, from 0 to 9
 *
 * Description: prints the numbers, from 0 to 9 an new line
 *
 * Return: number 1 through 9
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
