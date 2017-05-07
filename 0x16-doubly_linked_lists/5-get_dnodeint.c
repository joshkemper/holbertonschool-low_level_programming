#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list"
 * @head: head of list
 * @index: index of node to return
 * Return: node at index n
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempNode;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;
	tempNode = head;
	while (count < index)
	{
		if (tempNode->next == NULL)
		{
			return (NULL);
		}
		tempNode = tempNode->next;
		count++;
	}
	return (tempNode);
}
