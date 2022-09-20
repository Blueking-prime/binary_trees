#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to node to measure size
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		i = binary_tree_size(tree->left);
	if (tree->right != NULL)
		j = binary_tree_size(tree->right);

	return (i + j + 1);
}
