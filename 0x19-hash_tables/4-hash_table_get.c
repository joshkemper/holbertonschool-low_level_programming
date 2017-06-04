#include "hash_tables.h"

/**
 * hash_table_get - get a value for a key in hash table
 * @ht: hash table
 * @key: key to match and return coresponding value
 * Return: value or NULL if no key matches
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned int index;
	hash_node_t *tempNode = NULL;

	if (key == NULL || ht == NULL)
        {
                return (0);
        }
	index = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[index] != NULL)
	{
		tempNode = ht->array[index];
		while (tempNode != NULL)
		{
			if (strcmp(tempNode->key, key) == 0)
			{
				return (tempNode->value);
			}
			tempNode = tempNode->next;
		}
	}
	return (NULL);
}
