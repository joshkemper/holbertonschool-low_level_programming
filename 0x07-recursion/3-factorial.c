#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: integer to find factorial of
 * Description: returns the factorial of a given number
 * Return: 1 if 0, -1 if negative, or factorial on n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n <  0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

