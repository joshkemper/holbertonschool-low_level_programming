#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to tree
 * Return: pointer to new tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;
	binary_tree_t *temp1;

	temp = tree;
	temp1 = tree->right;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (tree);
	}
	temp->parent = temp1;
	temp->right = NULL;
	if (temp1->left != NULL)
	{
		temp->right = temp1->left;
		temp1->left = temp;
	}
	temp1->left = temp;
	temp1->parent = NULL;
	return (temp1);
}
