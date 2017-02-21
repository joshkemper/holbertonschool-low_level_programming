#include "holberton.h"
/**
 * puts2 - display every other character in string to output
 * @str: str variable holds a string
 * Description: displays every other character in string to output
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != 0)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		else if (*str % 2 != 0)
		{
			;
		}
		str++;
	}
	_putchar('\n');
}
