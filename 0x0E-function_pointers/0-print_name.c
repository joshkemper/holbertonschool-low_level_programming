#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Write a function that prints a name
 * @name: pointer to a string called name
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || *f == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
