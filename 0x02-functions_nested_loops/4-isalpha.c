#include "holberton.h"
/**
 * _isalpha - alphabetic charachter
 * @c: variable holds char to check
 *0
 * Description: checks to see if char is alphabetic charachter
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
