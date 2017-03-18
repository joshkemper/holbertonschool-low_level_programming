#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function prints variable amount of integer arguments
 * @x: integer
 * @argumentList: list of a variable ampount of integer arguments
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argumentList;
	unsigned int x;

	va_start(argumentList, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (x = 0; x < n - 1 ; x++)
	{
		printf("%d%s",va_arg(argumentList, int), separator);
	}
	printf("%d\n",va_arg(argumentList, int));
	va_end(argumentList);
}
