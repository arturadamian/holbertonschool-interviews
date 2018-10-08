#include "search_algos.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of the tree
 *
 * Return: 1 if full or 0
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if ((tree->left) && (tree->right))
			return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}