#include "holberton.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to a string
 *
 * Description: reverses a string and prints to output
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l] != 0)
	{
		l++;
	}
	l = l - 1;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
