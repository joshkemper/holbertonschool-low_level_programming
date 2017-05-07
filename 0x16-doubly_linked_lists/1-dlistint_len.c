#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - retuns number of elements in a linked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{

	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
