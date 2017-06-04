#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 1 for succes 0 failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newNode, *tempNode;


	if (key == NULL || value == NULL || ht == NULL)
	{
		return (0);
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (0);
	}
	if (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			ht->array[index]->value = strdup(value);
		}
		if (ht->array[index]->next != NULL)
		{
			ht->array[index] = ht->array[index]->next;
		}
		else
		{
			newNode->key = strdup(key);
			newNode->value = strdup(value);
			newNode->next = ht->array[index];
			ht->array[index] = newNode;
		}
	}
	return (1);
}
