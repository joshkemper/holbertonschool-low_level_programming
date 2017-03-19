#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function that prints a char integer or a string
 * @format: list of arguments passed to function
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	const char *ptr;
	char *s;
	char c;
	int i;
	double f;

	va_start(ap, format);

	ptr = format;
	while (*ptr != '\0')
	{
		switch (*ptr++)
		{
		case 's':
			s = va_arg(ap, char *);
			printf("%s", s);
			break;
		case 'i':
			i = va_arg(ap, int);
			printf("%d, ", i);
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f, ", f);
			break;
		case 'c':
			c = va_arg(ap, int);
			printf("%c, ", c);
			break;
		}
	}
	putchar('\n');
	va_end(ap);
}
