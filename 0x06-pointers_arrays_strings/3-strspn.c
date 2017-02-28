#include "holberton.h"
/**
 * _strspn - Returns the number of bytes in the initial segment of s
 * @s: initial string s
 * @accept: string to comare s to
 * Description: eturns the number of bytes in the initial segment of s
 * Return: p
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int p;

	for (i = 1; s[i] != ' '; i++)
	{
		if (accept[i] < '\0' || accept[i] == accept[i])
		{
			p = p + 1;
		}
	}
	return (p);
}

