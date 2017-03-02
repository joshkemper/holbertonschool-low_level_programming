#include "holberton.h"
/**
 * _pow_recursion - function returns the value of x raised to the power of y.
 * @x: base integer
 * @y: integer, power to the base
 * Return: negative -1, 0 is 1, and return the power value for positive
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
