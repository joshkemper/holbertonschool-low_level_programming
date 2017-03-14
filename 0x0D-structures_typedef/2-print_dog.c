#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to a struct
 * Description: prints a struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("%s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("%f\n", d->age);
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
