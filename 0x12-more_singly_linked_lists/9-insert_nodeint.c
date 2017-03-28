#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position (idx)
 * @head: double pointer to head of linked list
 * @idx: index of list to stop at
 * @n: value of (n) for newly inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node;
	unsigned int count = 0;

	temp_node = *head;
	while (count != idx - 1)
	{
		temp_node = temp_node->next;
		count++;
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
