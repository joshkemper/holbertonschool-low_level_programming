#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to a nade in binary tree
 * Return: count of depth of a givin node
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	int count;
	const binary_tree_t *temp;

	temp = node;
	count = 0;
	if (node == NULL)
		return (0);
	while (temp->parent != NULL)
	{
		temp = temp->parent;
		count += 1;
	}
	return (count);
}
