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
	printf("node %p:\n", (void *)ht->array[d]);
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		return (0);
	}
	if (ht->array[d] != NULL)
	{
		while (ht->array[d]->key != NULL)
		{
			if (strcmp(ht->array[d]->key, key) != 0)
			{
				printf("array key %s: reg key %s\n", ht->array[d]->key, key);
				ht->array[d] = ht->array[d]->next;
				d++;
			}
			else
			{
				printf("2nd array key %s: 2nd reg key %s\n", ht->array[d]->key, key);
				newNode->key = strdup(key);
				newNode->value = strdup(value);
				newNode->next = NULL;
				ht->array[d] = newNode;
				printf("2nd node %p:\n", (void *)ht->array[d]);
				break;
			}
		}
	}
	else
	{
		newNode->key = strdup(key);
		printf("key %s:\n", newNode->key);
		newNode->value = strdup(value);
		newNode->next = NULL;
		ht->array[d] = newNode;
		printf("3rd node %p:\n", (void *)ht->array[d]);
	}
	return (1);
}
