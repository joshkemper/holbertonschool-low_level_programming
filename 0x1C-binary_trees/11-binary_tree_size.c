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
	int count;

	count = 0;
	if (tree == NULL)
        {
                return (0);
        }
	count = count + 1;
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);
	return(count);
}
