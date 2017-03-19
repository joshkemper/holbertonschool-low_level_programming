#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function prints variable amount of integer arguments
 * @separator: string that separates variables
 * @n: number of argument passed to function
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentList;
	unsigned int x;

	va_start(argumentList, n);

	for (x = 0; x < n; x++)
	{
		if (separator != NULL && x != n - 1)
		{
			printf("%d%s", va_arg(argumentList, unsigned int), separator);
		}
		else
		{
			printf("%d", va_arg(argumentList, unsigned int));
		}
	}
	printf("\n");
	va_end(argumentList);
}
