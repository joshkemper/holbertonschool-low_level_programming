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
	unsigned long int d;
	hash_node_t *newNode;

	d = hash_djb2((unsigned char *)key) % ht->size;
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (0);
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	ht->array[d] = newNode;
	return (1);
}
