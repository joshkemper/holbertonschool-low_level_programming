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

	printf("start\n");
	if (key == NULL || value == NULL || ht == NULL)
	{
		return (0);
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	newNode = malloc(sizeof(hash_node_t));
	printf("got into beginiing\n");
	if (newNode == NULL)
	{
		return (0);
	}
	printf("got to if case\n");
	if (ht->array[index])
	{
		printf("got up in here\n");
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			printf("got here\n");
			ht->array[index]->value = strdup(value);
		}
			ht->array[index] = ht->array[index]->next;
	}
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
