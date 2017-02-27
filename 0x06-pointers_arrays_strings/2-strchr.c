#include "holberton.h"
/**
 * _strchr - Returns a pointer to first occurrence of character c in string s
 * @s: Returns a pointer to the first occurrence
 * @c: charchter c to look for
 * Description: Returns pointer to first character c in string s
 * Return: pointer s or NULL
 *
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		else if (s[i] == '\0')
		{
			return ("NULL");
		}
	}
	return ("NULL");
}
