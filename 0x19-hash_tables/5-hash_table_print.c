#include "hash_tables.h"

/**
 * null_checker - counts the amount of non empty arrays in hash table after index
 * @ht: hash table
 * @size: size of hash table
 * @index: index of array to start chcking from
 * Return: the number of arrays in hash table that are not NULL
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
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tempNode;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (index = 0; index <= ((ht->size) - 1); index++)
        {
		tempNode = ht->array[index];
		while (tempNode != NULL)
		{
			if (null_checker(ht, ht->size, index) <= 1)
			{
				printf("'%s': ", tempNode->key);
				printf("'%s'", tempNode->value);
				tempNode = tempNode->next;
			}
			else
			{
				printf("'%s': ", tempNode->key);
                                printf("'%s'", tempNode->value);
				printf(", ");
				tempNode = tempNode->next;
			}
		}
	}
	printf("}\n");
}
