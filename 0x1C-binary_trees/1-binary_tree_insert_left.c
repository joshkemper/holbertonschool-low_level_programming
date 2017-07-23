#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
		return(parent->left);
	}
	else
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = binary_tree_node(parent->left, value);
	}
        return(parent->left);
}
