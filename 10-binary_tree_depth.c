#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 *
 * @tree: pointer to node to measure depth
 *
 * Return: Nothing
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		i++;
	}

	return (i);
}
