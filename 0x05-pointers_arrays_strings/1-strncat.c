#include "holberton.h"
/**
 * _strncat - concatenates two strings second string to n bytes
 * @dest: destination file to be appended to
 * @src: file to append to dest
 * @n: append n bytes of src
 * Description: function concatenates two strings 2nd to n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
