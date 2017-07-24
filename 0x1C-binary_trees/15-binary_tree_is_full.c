#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *temp;
        const binary_tree_t *temp1;
	int left_score = 0;
	int right_score = 0;

	temp1 = tree;
        temp = tree;
	if (tree == NULL)
	{
                return (0);
	}
	while (temp->left != NULL)
        {
		printf("got in LEFT\n");
		if (temp->right == NULL)
		{
			printf("got LEFT IF 1\n");
			left_score = 0;
			break;
		}
		if (temp->left == NULL && temp->right != NULL)
		{
			printf("got LEFT IF 2\n");
			left_score = 0;
			break;
		}
		if (temp->left == NULL && temp->right == NULL)
		{

			printf("got LEFT IF 3\n");
			left_score = 1;
			break;
		}
                temp = temp->left;
        }
        while (temp1->right != NULL)
        {
		printf("got in RIGHT\n");
		if (temp1->left != NULL && temp1->right == NULL)
                {
                        right_score = 0;
			break;
		}
		if (temp1->left == NULL && temp1->right != NULL)
		{
                        right_score = 0;
			break;
                }
                if (temp1->left == NULL && temp1->right == NULL)
                {
		
                        right_score = 1;
			break;
		}
                temp1 = temp1->right;
        }
	printf("left_score %d\n", left_score);
	if (left_score == 1 && right_score == 1)
	{
		printf("got in IF RETURN !\n");
		return (1);
	}
	return (0);
}
