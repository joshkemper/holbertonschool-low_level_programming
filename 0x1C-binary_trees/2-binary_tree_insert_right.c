#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int temp;
	temp = value;
        if (parent->right == NULL)
        {
                parent->right = binary_tree_node(parent, temp);
		return(parent->right);
	}
        else
	{
		temp = parent->right->n;
		parent->right = binary_tree_node(parent, value);
		if (parent->right->right == NULL)
		{
			parent->right->right = binary_tree_node(parent->right,temp);
		}
	}
	return(parent->right);
}
