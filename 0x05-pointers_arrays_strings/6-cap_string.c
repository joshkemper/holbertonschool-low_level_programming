#include "holberton.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @p: pointer argumnet
 * Description: capitalizes all words of a string
 * Return: pointer p
 */
char *cap_string(char *p)
{
	int i;
	int j;
	char c[] = {' ', '\t', '\n', ',', ';', '.',
		    '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (p[i] == c[j] && p[i + 1] >= 'a' && p[i + 1] <= 'z')
			{
				p[i + 1] = p[i + 1] - 32;
			}
		}
	}
	return (p);
}
