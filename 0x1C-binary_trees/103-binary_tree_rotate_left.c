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
	binary_tree_t *temp2;

	temp = tree;
	temp1 = tree->right;
	temp2 = NULL;
	if (tree == NULL)
		return (tree);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (tree);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (tree);
	}
	temp->parent = temp1;
	temp->right = NULL;
	if (temp1->left != NULL)
	{
		temp2 = temp1->left;
		temp2->parent = temp;
		temp->right = temp2;
	}
	temp1->left = temp;
	temp1->parent = NULL;
	return (temp1);
}
