#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: interger to test
 *
 * Description: computes the absolute value of an integer
 * Return: return computed value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else if (c > 0)
	{
		return (c);
	}
	else
	{
		return (0);
	}
}
