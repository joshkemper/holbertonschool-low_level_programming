#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * free_listint2 - function that free a linked list
 * @head: double pointer to head of linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		temp_node = *head;
		*head = temp_node->next;
		free(temp_node);
	}
	*head = NULL;
}
