#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *
 *
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
        {
                return (0);
        }
	if (tree->left != NULL && tree->right != NULL)
	{
		return (2);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);
}
