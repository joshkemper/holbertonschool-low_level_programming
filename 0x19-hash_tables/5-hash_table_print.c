#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tempNode = NULL;

	index = 0;
	printf("{");
	for (index = 0; index < 1025; index++)
	{
		tempNode = ht->array[index];
		if (tempNode != NULL)
		{
			printf("'%s':'%s'", tempNode->key, tempNode->value);

		}
	}
	printf("}\n");
}
