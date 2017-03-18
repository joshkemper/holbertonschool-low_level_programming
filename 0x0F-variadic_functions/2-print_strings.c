#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints all strings giv as arguments
 * @x: loop integer
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argumentList;
	unsigned int x;

	va_start(argumentList, n);

	for (x = 0; x < n; x++)
	{
		if (va_arg(argumentList, char *) == NULL)
		{
			printf("nil ");
		}
		if (x != n - 1 && separator != NULL)
		{
			printf("%s%s", va_arg(argumentList, char *), separator);
		}
		printf("%s", va_arg(argumentList, char *));
	}
	va_end(argumentList);
	printf("\n");
}







/**if (separator == NULL)
   {
   printf("%s\n", va_arg(argumentList, char *));
   }
   if (va_arg(argumentList, char *) == NULL)
   {
   printf("nil");
   }
*/
