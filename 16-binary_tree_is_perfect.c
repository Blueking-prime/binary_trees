#include "binary_trees.h"

/**
 * binary_tree_height__ - measures the height of a binary tree
 *
 * @tree: pointer to node to measure height
 *
 * Return: size
 */
int binary_tree_height__(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		i = binary_tree_height__(tree->left);
	if (tree->right != NULL)
		j = binary_tree_height__(tree->right);

	if (i > j)
		return (1 + i);
	else
		return (1 + j);
}

/**
 * binary_tree_balance_ - measures the balance factor of a binary tree
 *
 * @tree: pointer to node to measure height
 *
 * Return: size
 */
int binary_tree_balance_(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height__(tree->left) - binary_tree_height__(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 *
 * @tree: pointer to root
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i, j, k;

	if (tree == NULL)
		return (0);

	i = binary_tree_balance_(tree);
	if (i == 0 && (tree->left != NULL && tree->right != NULL))
	{
		j = binary_tree_is_perfect(tree->left) - 1;
		k = binary_tree_is_perfect(tree->right) - 1;

		if (i == 0 && j == 0 && k == 0)
			return (1);
	}
	else if (i == 0 && (tree->left == NULL && tree->right == NULL))
		return (1);

	return (0);
}
