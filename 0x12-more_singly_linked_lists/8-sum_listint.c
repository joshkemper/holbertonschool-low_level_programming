#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to head of a linked list
 * Return: return the sum of all (n) value of nodes
 */

int sum_listint(listint_t *head)
{
	listint_t *temp_node;
	int sum = 0;

	temp_node = head;
	while (temp_node != NULL)
	{
		sum = sum + temp_node->n;
		temp_node = temp_node->next;
	}
	return (sum);
}
