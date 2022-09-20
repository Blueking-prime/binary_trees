#include "binary_trees.h"

/**
 * binary_tree_height_ - measures the height of a binary tree
 *
 * @tree: pointer to node to measure height
 *
 * Return: size
 */
int binary_tree_height_(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		i = binary_tree_height_(tree->left);
	if (tree->right != NULL)
		j = binary_tree_height_(tree->right);

	if (i > j)
		return (1 + i);
	else
		return (1 + j);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to node to measure height
 *
 * Return: size
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height_(tree->left) - binary_tree_height_(tree->right));
}
