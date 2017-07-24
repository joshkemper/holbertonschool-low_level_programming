#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - prints a binary tree using pre-order traversal
 * @tree: pointer to binary tree
 * @func: holds ->n value of a node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func = func;
	if (tree == NULL)
	{
		return;
	}
	printf("%d\n", tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
