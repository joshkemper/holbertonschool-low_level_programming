#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *
 *
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
        {
                return (0);
        }
	if (tree->left == NULL || tree->right == NULL)
	{
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count +1);
}
