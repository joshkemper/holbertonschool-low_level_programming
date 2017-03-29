#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position (idx)
 * @head: double pointer to head of linked list
 * @idx: index of list to stop at
 * @n: value of (n) for newly inserted node
 * Return: new_node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int count = 0;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		while (count != idx - 1)
		{
			temp = temp->next;
			count++;
			if (temp == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
