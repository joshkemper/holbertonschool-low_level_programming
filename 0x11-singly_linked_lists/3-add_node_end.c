#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to a string
 * Description: returns the length of a string
 * Return: 0 for no string, i + 1 (length of string) for success
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		i = (_strlen_recursion(s + 1));
		return (i + 1);
	}
}
/**
 * add_node_end - function that adds a new node at the end of a linked list
 * @head: head of linked list
 * @str: string to copy to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode;
	list_t *newNode;
	char *l;
	int len;

	newNode = *head;
	l = strdup(str);
	len = _strlen_recursion(l);

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
	{
		return (NULL);
	}
	lastNode->str = strdup(str);
	lastNode->len = len;
	lastNode->next = NULL;
	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}
	while (newNode->next != NULL)
	{
		newNode = newNode->next;
	}
	newNode->next = lastNode;
	return (lastNode);
}
