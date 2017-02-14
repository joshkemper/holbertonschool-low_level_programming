#include "holberton.h"
/**
 * _islower - checks if letter is lower case
 * @c: checks to see if char is lower case
 *
 * Description: checks to see if char is lower case
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
