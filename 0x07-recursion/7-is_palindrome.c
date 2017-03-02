#include "holberton.h"
/**
 * _strlen_recursion - finds length of a string
 * @s: pointer to a string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
	{
		return (0);
	}

	i = (_strlen_recursion(s + 1));
	return (i + 1);
}
/**
 * first_is_last - returns the natural square root of a number.
 * @first: beginning index position
 * @last: end of striing index position
 * Return: return string if palindrome
 **/

int first_is_last(char *first, char *last)
{
	if (first != last)
	{
		return (0);
	}
	else if (&first == &last)
	{
		return (1);
	}
	else
	{
		return (first_is_last(first + 1, last - 1));
	}
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0
 * @s: pointer to string
 * Return: 1 if palindrome, 0 in not
 **/
int is_palindrome(char *s)
{

	int len = _strlen_recursion(s);
	char *first;
	char *last;

	*first  = *s;
	*last = *(s + len - 1);

	return (first_is_last(first, last));
}
