#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int temp;
       


	temp = value;
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, temp);
		return(parent->left);
	}
	else
	{
		temp = parent->left->n;
		parent->left = binary_tree_node(parent, value);
		if (parent->left->left == NULL)
		{
			parent->left->left = binary_tree_node(parent->left, temp);
		}
	}
        return(parent->left);
}
