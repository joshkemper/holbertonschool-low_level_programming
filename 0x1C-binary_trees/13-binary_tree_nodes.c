#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with 1 child
 * @tree: pointer to binary tree
 * Return: number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (1);
	}
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
