#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_size- returns size of binary tree
 * @tree: root of tree
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right == NULL)
	{
		return (2);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (2);
	}
/* Add 1 to count root node */
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * b - checks to see if tree is complete
 * @tree: root of tree
 * @index: index
 * @nodes: number of nodes
 * Return: 1 if complete 0 if not complete
 */
bool b(const binary_tree_t *tree, unsigned int index, unsigned int nodes)
{
	unsigned int i;

	if (tree == NULL)
		return (true);
	if (index >= nodes)
		return (false);
	i = 2 * index;
	return (b(tree->left, i + 1, nodes) && b(tree->right, i + 2, nodes));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: root of tree
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int c;
	unsigned int index;
	unsigned int number_nodes;

	c = 0;
	index = 0;
	number_nodes = 0;
	number_nodes = binary_tree_size(tree);
	c = b(tree, index, number_nodes);
	return (c);
}
