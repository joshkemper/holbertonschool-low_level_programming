#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to head of list
 * @idx: index of position in lionked list to stop at
 * @n: integer
 * Return: newNode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode;
	dlistint_t *tempNode;
	unsigned int count = 0;

	tempNode = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (idx == 0)
	{
		newNode->next = tempNode;
		*h = newNode;
		return (newNode);
	}
	while (tempNode != NULL)
	{
		while (count != idx - 1)
		{
			tempNode = tempNode->next;
			count++;
			if (tempNode == NULL)
			{
				free(newNode);
				return (NULL);
			}
		}
		newNode->prev = tempNode;
		newNode->next = tempNode->next;
		tempNode->next = newNode;
		return (newNode);
	}
	return (NULL);
}
