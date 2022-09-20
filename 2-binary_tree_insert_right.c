#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 *
 * @parent: pointer to parent node of node
 *
 * @value: value to put in the node
 *
 * Return: pointer to node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	/* Check if tree exists */
	if (parent == NULL)
		return (NULL);

	/* Check if node has free right slot */
	if (parent->right == NULL)
	{
		new->right = NULL;
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->parent = parent;
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
		new->n = value;
		new->left = NULL;
		new->parent = parent;
	}

	return (new);
}
