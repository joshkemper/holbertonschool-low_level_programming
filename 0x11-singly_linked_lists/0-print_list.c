#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <unistd.h>

/**
 * print_list - print elements of struct
 * @h: head of structure
 * Return: nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
