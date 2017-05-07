#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data (n) of a doublly linked list
 * @head: head of linked list
 * Return: sum of n elements in linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tempNode;
	int sum = 0;

	tempNode = head;
	while (tempNode != NULL)
	{
		sum = sum + tempNode->n;
		tempNode = tempNode->next;
	}
	return (sum);
}
