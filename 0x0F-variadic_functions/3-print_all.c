#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a char
 * @ap: list of arguments
 * Return: none
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints a float integer
 * @ap: list of arguments
 * Return: none
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_int - prints an int
 * @ap: list of arguments
 * Return: none
 */
void  print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_string - prints a string
 * @ap: list of arguments
 * Return: none
 */
void print_string(va_list ap)
{
	char *ptr_string;

	ptr_string = (va_arg(ap, char*));
	if (ptr_string == NULL)
	{
		ptr_string = "(nil)";
	}
	printf("%s", ptr_string);
}
/**
 * print_all - prints everything
 * @format: list of args passed to function
 * Return: none
 */
void print_all(const char * const format, ...)
{

	op_t fmt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;
	int i, j;
	char *separator = "";

	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		while (fmt[j].op != NULL)
		{
			if (format[i] == fmt[j].op[0])
			{
				printf("%s", separator);
				fmt[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
