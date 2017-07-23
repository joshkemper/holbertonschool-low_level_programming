#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height- function that measures the height of a binary tree
 * @tree: pointer to a binary tree
 * Return: count of nodes as height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int count;
	const binary_tree_t *temp;

	temp = tree;
	count = 1;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	while (temp->left != NULL)
	{
		temp = temp->left;
		count += 1;
       	}
	return(count);
}
