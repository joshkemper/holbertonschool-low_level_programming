#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - returns the summ of a vriable size list of arguments
 * @n: number of variable arguments listed by caller
 * Return: sum of varible size list of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argumentList;
	int sum = 0;
	unsigned int x;

	va_start(argumentList, n);
	if (n == 0)
	{
		return (0);
	}
	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(argumentList, unsigned int);
	}
	va_end(argumentList);
	return (sum);
}
