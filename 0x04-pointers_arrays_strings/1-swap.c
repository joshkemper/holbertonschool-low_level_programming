#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - swap intger values of a sand b pointers
 * @a: first integer pointer
 * @b: second integer pointer
 * Description: swap values of pointer a and b
 *
 * Return:
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
	return (0);
}

