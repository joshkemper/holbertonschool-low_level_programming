#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print elements of a struct
 * @h: head of linked lists
 * Return: nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int  nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
