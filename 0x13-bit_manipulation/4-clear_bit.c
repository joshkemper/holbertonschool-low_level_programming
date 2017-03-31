#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to binary number
 * @index: index position to change bit to 0
 * Return: pointer to n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (~(1 << index));
	return (*n);
}
