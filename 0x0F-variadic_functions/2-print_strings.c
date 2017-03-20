#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints all strings give as arguments
 * @separator: string that separates the arguments
 * @n: number of arguments passed in function
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentList;
	unsigned int x;
	char *ptr;

	va_start(argumentList, n);

	for (x = 0; x < n; x++)
	{
		ptr = va_arg(argumentList, char*);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(argumentList);
	printf("\n");
}
