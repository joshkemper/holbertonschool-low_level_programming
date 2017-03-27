#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * free_listint - free's a linked list
 * @head: pointer to head of list passed as argument
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = temp_node->next;
		free(temp_node);
	}
}
