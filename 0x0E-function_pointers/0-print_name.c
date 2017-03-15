#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Write a function that prints a name
 * @name:
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
