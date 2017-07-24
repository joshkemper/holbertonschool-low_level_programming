#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to a binary tree
 * Return: count of nodes as height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count;
	size_t count1;

	count = 0;
	count1 = 0;
	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	{
		return (0);
	}
	count = binary_tree_height(tree->left);
	count1 = binary_tree_height(tree->right);
	if (count1 > count)
	{
		return (count1 + 1);
	}
	return (count + 1);
}
