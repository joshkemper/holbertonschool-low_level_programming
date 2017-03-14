#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to dog instance
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d->age);
	free(d);
}
