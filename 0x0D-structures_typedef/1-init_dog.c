#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init dog struct
 * @d: pointer to dog struct
 * @name: pointer to dog name
 * @age: dog age
 * @owner: dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
