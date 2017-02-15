#include "holberton.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @c: integer
 *
 * Description: prints the last digit of a number
 *
 * Return: return 0
 */
int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (c < 0)
	{
		lastDigit = lastDigit * -1;
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
