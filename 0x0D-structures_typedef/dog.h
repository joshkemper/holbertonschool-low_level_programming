#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 * Description: struct for dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
