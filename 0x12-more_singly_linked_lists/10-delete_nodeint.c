#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at given index of linked list
 * @head: double pointer to head of linked list
 * @index: index to delete node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	listint_t *temp_node1;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp_node = *head;
	temp_node1 = *head;
	if (index == 0)
	{
		*head = temp_node->next;
		free(temp_node1);
		return (1);
	}
	while (count != index - 1)
	{
		if (temp_node1->next == NULL)
		{
			return (-1);
		}
		temp_node1 = temp_node1->next;
		count++;
	}
	count = 0;
	while (count < index)
	{
	temp_node = temp_node->next;
	count++;
	}
	temp_node1->next = temp_node->next;
	free(temp_node);
	return (1);
}
