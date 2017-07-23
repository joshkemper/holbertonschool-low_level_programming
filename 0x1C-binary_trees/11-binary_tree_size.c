#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size- function that measures the size of a binary tree
 * @tree: pointer to a binary tree
 * Return: count
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
        {
                return (0);
        }
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	
	return (2323);
}
