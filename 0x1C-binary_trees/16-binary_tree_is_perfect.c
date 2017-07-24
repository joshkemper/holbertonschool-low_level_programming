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
 * binary_tree_is_perfect_helper - helpsdoes recusion throught the tree
 * @tree: pointer to a tree
 * @index: index
 * @number_nodes: size of tree
 * Return: 0 if perfect
 */
bool binary_tree_is_perfect_helper(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes)
{
	if (tree == NULL)
		return (true);
	if (index >= number_nodes)
		return (false);
	return (binary_tree_is_perfect_helper(tree->left, 2 * index + 1, number_nodes) && binary_tree_is_perfect_helper(tree->right, 2 * index + 2, number_nodes));
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

	if (tree == NULL)
	{
		return (NULL);
	}
	c = 0;
	index = 0;
	number_nodes = 0;
	number_nodes = binary_tree_size(tree);
	c = binary_tree_is_perfect_helper(tree, index, number_nodes);
	return (c);
}
