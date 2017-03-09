#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: bytes needed to allocate
 * Return: pointer ptr / return 98 for fail
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
