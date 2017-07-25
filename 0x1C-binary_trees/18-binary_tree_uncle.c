#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node: pointer to node in tree
 * Return: uncle node of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->parent->left->right)
	{
		return (node->parent->parent->right);
	}
	else if (node == node->parent->parent->left->left)
	{
		return (node->parent->parent->right);
	}
	else if (node == node->parent->parent->right->left)
	{
		return (node->parent->parent->left);
	}
	return (node->parent->parent->left);
}
