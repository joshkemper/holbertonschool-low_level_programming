#include "holberton.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer destination buffer to wrote on
 * @src: pointer to the source buffer to write to dest
 * @n: number of bytes to copy from n
 * Description: copies n bytes from memory src to memory area dest
 * Return: pointer to dest buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
