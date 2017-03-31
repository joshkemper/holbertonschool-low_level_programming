#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: num
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	unsigned int flip = 1;
	int i;

	for (i = 0; b[i] != '\0'; b++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		num <<= 1;
		if (b[i] == '1')
		{
			num = num ^ flip;
		}
	}
	return (num);
}
