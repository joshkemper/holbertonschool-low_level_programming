#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should be stored
 * @key: key
 * @size: size of hashtable
 * Return: the index key belongs to
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int c;
	c = hash_djb2(key) % size;
	return (c);
}
