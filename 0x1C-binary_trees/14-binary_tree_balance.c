#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: pointer to a tree
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count;
	int count1;
	const binary_tree_t *temp;
	const binary_tree_t *temp1;

	temp1 = tree;
	temp = tree;
	count1 = 0;
	count = 0;
	if (tree == NULL)
	{
		return (0);
	}
	while (temp->left != NULL)
	{
		temp = temp->left;
		count += 1;
	}
	while (temp1->right != NULL)
	{
		temp1 = temp1->right;
		count1++;
	}
	return (count - count1);
}
