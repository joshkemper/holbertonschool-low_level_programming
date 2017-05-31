#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


hash_table_t * hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i;

	if (size == 0)
	{
		return NULL;
	}
	hashtable = malloc(sizeof(hash_table_t));
	if (hashtable == NULL)
	{
		return NULL;
	}

	hashtable->array = malloc(size, sizeof(hash_node_t *));
	if (hashtable->array == NULL)
	{
		free(hashtable);
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}
	hashtable->size = size;
        return hashtable;
}
