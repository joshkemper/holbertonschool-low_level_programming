#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 * Description: struct for dog info
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen_recursion(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
