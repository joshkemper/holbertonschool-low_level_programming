#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *temp;

	temp = parent;
	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->parent = temp;
	newNode->left = NULL;
	newNode->right = NULL;
	if (temp->left == NULL)
	{
		temp->left = newNode;
	}
	else
	{
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->left->parent = newNode;
	}
	return (newNode);
}
