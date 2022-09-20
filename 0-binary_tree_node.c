#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: pointer to parent node of node
 *
 * @value: value to put in the node
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	/* Check if node exists and has free slots */
	if (parent == NULL)
		parent = new;
	else if (parent->left == NULL)
		parent->left = new;
	else if (parent->right == NULL)
		parent->right = new;
	else
		free(new);

	return (new);
}
