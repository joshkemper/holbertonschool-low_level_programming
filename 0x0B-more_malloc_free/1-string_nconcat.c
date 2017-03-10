#include "holberton.h"
#include <stdlib.h>
/**
 * _strlen - counts the length of a given string
 * @s: pointer to a string , characters in string are counted
 * Description: counts the length of string pointed to by *s
 *
 * Return: count of charachters in a string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amout of bytes to print from s2
 * Return: ptr concatonated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int k;
	unsigned int stringlenS1;
	unsigned int stringlenS2;


	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	stringlenS1 = _strlen(s1);
	stringlenS2 = _strlen(s2);
	if (stringlenS2 <= n)
	{
		n = stringlenS2;
	}
	ptr = malloc((n + 1 + stringlenS1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < stringlenS1; i++)
	{
		ptr[i] = s1[i];
	}
	for (k = 0; k < n; k++, i++)
	{
		ptr[i] = s2[k];
	}
	ptr[i] = '\0';
	return (ptr);
}
