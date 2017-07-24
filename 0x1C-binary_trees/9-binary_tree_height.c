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
	int count1;
	const binary_tree_t *temp;
	const binary_tree_t *temp1;

	temp = tree;
	temp1 = tree;
	count = 0;
	count1 = 0;
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
	while (temp1->right != NULL)
	{
		temp1 = temp1->right;
		count1 += 1;
	}
	if (count1 > count)
	{
		return (count1);
	}
	return (count);
}
