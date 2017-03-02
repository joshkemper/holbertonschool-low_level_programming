#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: pointer to a string
 * Description: prints a string in reverse
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	putchar(*s);
	}
}
