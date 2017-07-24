#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 * @node: pointer to binary tree node
 * Return: 1 if nade is root 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node)
	{
		if (node->parent == NULL)
		{
			return (1);
		}
	}
	return (0);
}
