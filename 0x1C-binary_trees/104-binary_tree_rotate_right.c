#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_rotate_right - performs a left-rotation on a binary tree
 * @tree: pointer to tree
 * Return: pointer to new tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;
	binary_tree_t *temp1;
	binary_tree_t *temp2;

	temp = tree;
	temp1 = tree->left;
	temp2 = NULL;
	if (tree == NULL)
		return (tree);
	if (tree->right == NULL && tree->left == NULL)
	{
		return (tree);
	}
	if (tree->right != NULL && tree->left == NULL)
	{
		return (tree);
	}
	temp->parent = temp1;
	temp->left = NULL;
	if (temp1->right != NULL)
	{
		temp2 = temp1->right;
		temp2->parent = temp;
		temp->left = temp2;
	}
	temp1->right = temp;
	temp1->parent = NULL;
	return (temp1);
}
