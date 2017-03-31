#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - returns bits needed to flip to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: amount of bits neede to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size = sizeof(n) * 8 - 1;
	int flipped = 0;
	unsigned int i = 0;

	while (size >= i)
	{
		if ((n & 1) != (m & 1))
		{
			flipped++;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (flipped);
}
