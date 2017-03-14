#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a string
 * Description: returns the length of a string
 * Return: 0 for no string, i + 1 (length of string) for success
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = (_strlen_recursion(s + 1));
		return (i + 1);
	}
}

/**
 * _strcpy - copies the string pointed to by src,
 * @dest: destination poiter to take value
 * @src: array poited that gets copied
 *
 * Description: copies string pointed to by src,
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: superdog on success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *superDog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	superDog = malloc(sizeof(dog_t));
	if (superDog == NULL)
	{
		return (NULL);
	}
	superDog->name = malloc(sizeof(char) * _strlen_recursion(name) + 1);
	if (superDog->name == NULL)
	{
		free(superDog);
		return (NULL);
	}
	superDog->owner = malloc(sizeof(char) * _strlen_recursion(owner) + 1);
	if (superDog->owner == NULL)
	{
		free(superDog->name);
		free(superDog);
		return (NULL);
	}
	_strcpy(superDog->name, name);
	_strcpy(superDog->owner, owner);
	superDog->age = age;
	return (superDog);
}
