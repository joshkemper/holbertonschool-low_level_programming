#include "holberton.h"
/**
 * _puts - outputs a string
 * @str: varibale holding a string
 * Description: sends a string from a varibal to output
 *
 * Return: 0 for success
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
