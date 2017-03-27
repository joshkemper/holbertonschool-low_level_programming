#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: double pointer to argument
 * @n: value for newly created node
 * Return: new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	temp_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	return (new_node);
}
