#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

/**
 * binary_tree_size - get tree size
 * @tree: pointer to tree
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int c;

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
	c = (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	printf("c %d\n", c);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * b - helpsdoes recusion throught the tree
 * @tree: pointer to a tree
 * @index: index
 * @nodes: size of tree
 * Return: 0 if perfect
 */
bool b(const binary_tree_t *tree, unsigned int index, unsigned int nodes)
{
	unsigned int ind;

	if (tree == NULL)
		return (true);
	if (index >= nodes)
		return (false);
	i = 2 * index + 2;
	return (b(tree->left, i, nodes) && b(tree->right, i, nodes));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a tree
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
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
