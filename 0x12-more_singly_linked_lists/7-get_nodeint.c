#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to head of a linked list
 * @index: index of node to return
 * Return: nth (index) node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	count = 0;
	temp_node = head;
	while (count < index)
	{
		if (temp_node->next == NULL)
		{
			return (NULL);
		}
		temp_node = temp_node->next;
		count++;
	}
	return (temp_node);
}
