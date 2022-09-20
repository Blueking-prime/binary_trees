#include "binary_trees.h"

/**
 * binary_tree_nodes - measures the height of a binary tree
 *
 * @tree: pointer to node to measure height
 *
 * Return: size
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
