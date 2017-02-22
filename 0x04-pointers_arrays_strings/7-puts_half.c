#include "holberton.h"
/**
 * puts_half - putslast half of string for even number strings and -1 /2 odd
 * @str: pointer to string
 * Description: putslast half of a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length, half;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
	{
		half = (length + 1) / 2;
	}
	else
	{
		half = length - (length / 2);
	}
	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
