#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf- checks if node is a leaf
 * @node: node in tree to check if leaf
 * Return: 1 if node is a leaf 0 if not a leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

