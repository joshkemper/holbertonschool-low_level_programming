#include "holberton.h"
/**
 * root - fint the square root of a number
 * @i: integer to tset if is the square root
 * @n: integer value to take square root of
 * Return: square root of n
 */
int root(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (root(i + 1, n));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find squre root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	n = root(i + 1, n);
	return (n);
}
