#include "binary_trees.h"

/**
 * recurs_full - checks if a tree is full recursively
 *
 * @tree: pointer to node to measure height
 *
 * Return: 1 or 0
 */
int recurs_full(const binary_tree_t *tree)
{
	int i = 1, j = 1;

	if (tree->left == NULL && tree->right != NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);

	i = recurs_full(tree->left);
	j = recurs_full(tree->right);

	if (i == 0 || j == 0)
		return (0);

	return (1);
}

/**
 * binary_tree_is_full - checks if a tree is full
 *
 * @tree: pointer to node to measure height
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recurs_full(tree));
}
