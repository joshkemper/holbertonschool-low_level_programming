#include "holberton.h"
/**
 * _strcat -  function that concatenates two strings
 * @dest: destination file to be appended to
 * @src: file to appent to dest
 * Description: function concatenates two strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
