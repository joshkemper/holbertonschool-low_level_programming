#include "holberton.h"
/**
 * _strncpy - copies the string pointed to by src to dest
 * @dest: destination string
 * @src: source string
 * @n: total number of bytes written
 * Description: copy the string pointed to by src to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
