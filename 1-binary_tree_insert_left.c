#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to parent node of node
 *
 * @value: value to put in the node
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	/* Check if tree exists */
	if (parent == NULL)
		return (NULL);

	/* Check if node has free left slot */
	if (parent->left == NULL)
	{
		new->left = NULL;
		parent->left = new;
		new->n = value;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		new->n = value;
		new->right = NULL;
		new->parent = parent;
	}

	return (new);
}
