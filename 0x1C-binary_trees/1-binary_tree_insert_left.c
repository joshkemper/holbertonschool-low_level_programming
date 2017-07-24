#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: root of a tree
 * @value: value of node to insert
 * Return: new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	else
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp;
	}
	return (parent->left);
}
