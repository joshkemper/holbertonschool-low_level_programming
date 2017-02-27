#include "holberton.h"
/**
 * _strchr - Returns a pointer to first occurrence of character c in string s
 * @s: Returns a pointer to the first occurrence
 * @c: charchter c to look for
 * Description: Returns a pointer to first occurrence of character c in string s
 * Return: pointer s
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
 		}
	}
	return (s);
}
