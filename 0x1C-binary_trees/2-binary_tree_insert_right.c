#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

        if (parent->right == NULL)
        {
                parent->right = binary_tree_node(parent, value);
		return(parent->right);
	}
        else
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = temp;
	}
	return(parent->right);
}
