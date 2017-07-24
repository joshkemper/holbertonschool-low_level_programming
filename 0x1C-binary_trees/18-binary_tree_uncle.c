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
        if (node->parent == NULL)
	{
		return (NULL);
	}
        if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node->parent->left != NULL && node->parent->right != NULL)
	{
		if (node == node->parent->left)
		{
			if (node->parent->parent == NULL)
			{
				return (NULL);
			}
			return (node->parent->parent->left);
		}
		else
		{
			if (node->parent->parent == NULL)
                        {
				return (NULL);
			}
			return (node->parent->parent->right);
		}
	}
        return (NULL);
}
