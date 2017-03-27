#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>
/**
 * listint_len - Returns the number of elements in a linked list
 * @h: pointer to argument
 * Return: node_counter
 *
 */

size_t listint_len(const listint_t *h)
{
	unsigned int node_counter;

	node_counter = 0;
	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}
	return (node_counter);
}
