#include "holberton.h"
/**
 * _strcmp - compares the two strings eturns an integer less, equal, or greater
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: compares the two strings returnes diff in ascii
 * Return: k
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int k = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			k = s1[i] - s2[i];
		}
		i++;
	}
	return (k);
}
