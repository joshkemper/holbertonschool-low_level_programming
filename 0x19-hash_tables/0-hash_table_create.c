#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - cereate a hash table
 * @size: size of table
 * Return: pointer to table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	if (size == 0)
	{
		return (NULL);
	}
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return (NULL);
	}
	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		return (NULL);
	}
	return (hashtable);
}
