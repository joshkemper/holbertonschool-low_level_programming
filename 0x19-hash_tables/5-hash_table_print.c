#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
 */

int null_checker(const hash_table_t *ht, unsigned long int size, unsigned int index)
{
	unsigned int i;
	unsigned int count = 0;

	for (i = index; i < size; i++)
	{

		if (ht->array[i] == NULL)
		{
			continue;
		}
		else
		{
			count = count + 1;
		}
	}
	return (count);
}

/**
 *
 *
 *
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned int index;
	int c;
	hash_node_t *tempNode = NULL;

	printf("{");
        for (index = 0; index <= ht->size; index++)
        {
		tempNode = ht->array[index];
		printf("'%s':'%s'", tempNode->key, tempNode->value);
		c = null_checker(ht, ht->size, index);
		if (c == 0)
		{
			if (tempNode->key != NULL)
			{
				printf("'%s':'%s'", tempNode->key, tempNode->value);
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("'%s':'%s', ", tempNode->key, tempNode->value);
		}
	}
	printf("\n");
}
