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
	int length = 0;
	int count = 0;
	int i;
	int half;

	while (str[length] != 0)
	{
		length++;
		i = length++;
	}
	if (length % 2 != 0)
	{
		_putchar((length + 1) / 2);
	}
	else
	{
		half = length - (length / 2);
	}
	for (count = 0; count <= i; count++)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
