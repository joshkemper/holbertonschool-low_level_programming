#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a string
 * Description: returns the length of a string
 * Return: 0 for no string, i + 1 (length of string) for success
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = (_strlen_recursion(s + 1));
		return (i + 1);
	}
}
