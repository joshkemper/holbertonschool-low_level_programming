#include "holberton.h"
/**
 * string_toupper - function that changes all lowercase letters uppercase
 * @p: pointer
 * Description: function that changes lowercase letters uppercase
 * Return: *p
 */
char *string_toupper(char *p)
{
	int count = 0;

	while (p[count] != '\0')
	{
		if (p[count] >= 'a' && p[count] <= 'z')
		{
			p[count] = p[count] - 32;
		}
		else
		{
			p[count] = p[count];
		}
		count++;
	}
	return (p);
}
