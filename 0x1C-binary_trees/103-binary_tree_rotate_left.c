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

	if (tree == NULL)
		return (0);
	temp = tree;
	temp1 = tree->right;
	temp->right = NULL;
	temp->parent = temp1;
	temp1->left = temp;
	temp1->parent = NULL;
	return (temp1);
}
