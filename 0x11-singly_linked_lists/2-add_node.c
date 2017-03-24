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
 * add_node - function that adds a new node at the beginning of a linked list
 * @head: pointer to pointer to begining of linked list
 * @str: string to copy into new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *new_str = strdup(str);
	int newLen = _strlen_recursion(new_str);

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
