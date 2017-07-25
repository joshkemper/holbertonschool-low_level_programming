#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to common ancestrer node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *temp;

	temp = second;
	while (first)
	{
		second = temp;
		while (second)
		{
			if (first->n == second->n)
			{
				if (first->left != NULL)
				{
					return (first->left->parent);
				}
				else if (first->right != NULL)
				{
					return (first->right->parent);
				}
			}
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}

