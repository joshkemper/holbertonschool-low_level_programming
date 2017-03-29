#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * pop_listint - Deletes the head node of linked list, returns it's data
 * @head: double pointer to head of a linked list
 * Return: data from deleted head of list
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int saved_data;

	if (*head != NULL)
	{
		temp_node = *head;
		*head = temp_node->next;
		saved_data = temp_node->n;
		free(temp_node);
		return (saved_data);
	}
	else
	{
		return (0);
	}
}
