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
	unsigned int p = 0;
	unsigned int j = 0;

	for (i = 0; s[i] > ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
			p += 1;
			}
		}
	}
	return (p);
}

