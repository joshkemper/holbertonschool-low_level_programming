#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: pointer to pointer to begining of linked list
 * @str: string to copy into new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *new_str = strdup(str);
	int newLen = strlen(new_str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = new_str;
	newNode->next = *head;
	newNode->len = newLen;
	*head = newNode;
	return (newNode);
}
