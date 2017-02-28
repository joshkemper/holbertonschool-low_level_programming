#include "holberton.h"
/**
 * _strpbrk - locates first occurrence in string s of the bytes accept
 * @s: first string
 * @accept: string to check aggainst s
 * Description: locate first occurrence in string s of the bytes accept
 * Return: address of s[i] or 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

