#include "holberton.h"

/**
 * _isupper - check uppercase letters
 * @c: varibale to test if uppcase
 * Description - checks to see if a letter is uppcase (1) or not (0)
 *
 *Return: 1 for uppcase 0 for all other
 */
int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
