#include "holberton.h"
/**
 * _memset - fills n bytes of memory area s with constant byte b
 * @s: buffer to write on
 * @b: char to verwrite buffer
 * @n: n bytes of memory to overwrite
 * Description: n bytes of memory area s with constant byte b
 * Return: pointer s to a buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
