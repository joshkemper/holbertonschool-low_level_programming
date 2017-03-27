#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a linked list
 * @h: pointer to argument
 * Return: node_counter
 */

size_t print_listint(const listint_t *h)
{
	unsigned int node_counter;

	node_counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_counter = node_counter + 1;
	}
	return (node_counter);
}
