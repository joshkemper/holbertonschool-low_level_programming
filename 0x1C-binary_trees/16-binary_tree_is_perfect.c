#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
#include <stdbool.h>

bool binary_tree_is_perfect_helper(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes);
size_t binary_tree_size(const binary_tree_t *tree);

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

bool binary_tree_is_perfect_helper(const binary_tree_t *tree, unsigned int index, unsigned int number_nodes)
{
	if (tree == NULL)
		return (true);
	if (index >= number_nodes)
		return (false);
	return (binary_tree_is_perfect_helper(tree->left, 2*index + 1, number_nodes) && binary_tree_is_perfect_helper(tree->right, 2*index + 2, number_nodes));
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int c;
	unsigned int index;
	unsigned int number_nodes;

	c = 0;
	index = 0;
	number_nodes = 0;
	number_nodes = binary_tree_size(tree);
 	c = binary_tree_is_perfect_helper(tree, index, number_nodes);
	return (c);
}
