#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node to begining of a doubly linked list
 * @head: head of linked list
 * @n: integer
 * Return: newNode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int new_int = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = new_int;
	newNode->next = *head;
	newNode->prev = NULL;
	*head = newNode;
	return (newNode);
}
